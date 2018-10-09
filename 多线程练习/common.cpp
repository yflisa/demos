#include "common.h"
#include <list>
using namespace std;

#define SUCCESS (0)
#define FAILURE (-1)

const s32 g_nMaxn = 10;
SEMHANDLE g_hSem[g_nMaxn] = {0};			//线程运行时候的锁
//SEMHANDLE g_hTaskSem = {0};					//保证线程正确创建的锁
list<int>   g_nList;
s32 g_nIdx = 0;
TASKHANDLE g_hTaskHandle[g_nMaxn] = {0};	//线程创建后的句柄
bool	g_bExit[g_nMaxn] = {false};			//线程退出时候的全局变量
s32		g_hWatchSock[g_nMaxn] = {0};		//全局监听套接字
u16		g_nWatchSockPortBase = 50000;

//=======errno number=======
#define ERROR_BASE (10000)
#define ERROR_INIT			(ERROR_BASE + 1)
#define ERROR_PARAM			(ERROR_BASE + 2)
#define ERROR_TAKE_SEM		(ERROR_BASE + 3)
#define ERROR_CHECK_THREAD	(ERROR_BASE + 4)
#define ERROR_CHECK_PORT	(ERROR_BASE + 5)
#define ERROR_RECV_FROM		(ERROR_BASE + 6)
#define ERROR_SOCK_CREATE	(ERROR_BASE + 7)
#define ERROR_SOCK_BIND		(ERROR_BASE + 8)
#define ERROR_SOCK_IOCTL	(ERROR_BASE + 9)
#define ERROR_SOCK_SEND		(ERROR_BASE + 10)
#define ERROR_TASK_CREATE	(ERROR_BASE + 11)
#define ERROR_ERASE			(ERROR_BASE + 12)
#define ERROR_RELEASE		(ERROR_BASE + 12)
//==========================

/*
	函数说明：初始化
*/
u16 Init()
{
	bool bRet = OspInit(true, 2800);
	if(true != bRet)
	{
		OspPrintf(1, 0, "osp init error, %s(%d), bRet = %d\n", __FUNCTION__, __LINE__, bRet);
		return ERROR_INIT;
	}
	
	for(int i = 0; i < g_nMaxn; i++)
	{
		if(g_hWatchSock[i] != NULL)
		{
			SockClose(g_hWatchSock[i]);
			g_hWatchSock[i] = NULL;
		}

		if(g_hSem[i] != NULL)
		{
			OspSemDelete(g_hSem[i]);
			g_hSem[i] = NULL;
		}

		if(!OspSemBCreate(&g_hSem[i]))
		{
			OspPrintf(1, 0, "%s(%d) ospSemBCreate(g_hSem[%d]) error\n", __FUNCTION__, __LINE__);
			return ERROR_TAKE_SEM;
		}

		if(g_hTaskHandle[i] != NULL)
		{
			OspTaskTerminate(g_hTaskHandle[i]);
			g_hTaskHandle[i] = NULL;
		}
	}
	
	if(!g_nList.empty())
		g_nList.clear();
	
	return SUCCESS;
}

/*
	函数说明：反初始化
*/
void Uninit()
{
	for(int i = 0; i < g_nMaxn; i++)
	{
		if(g_hWatchSock[i] != NULL)
		{
			SockClose(g_hWatchSock[i]);
			g_hWatchSock[i] = NULL;
		}
		
		if(g_hSem[i] != NULL)
		{
			OspSemDelete(&g_hSem[i]);
			g_hSem[i] = NULL;
		}

		if(g_hTaskHandle[i] != NULL)
		{
			OspTaskTerminate(g_hTaskHandle[i]);
			CloseHandle(g_hTaskHandle[i]);
			g_hTaskHandle[i] = NULL;
		}
	}
	
	if(!g_nList.empty())
		g_nList.clear();
	
	OspQuit();
}

/*
	函数说明：检测下标为nIdx的线程是否已经创建
*/
u16 CheckThread(int nIdx)
{
	if(g_hTaskHandle[nIdx] != NULL)
		return SUCCESS;
	return ERROR_CHECK_THREAD;
}

/*
	函数说明：检测下标为nIdx的端口是否可用
*/
u16 CheckPort(int nIdx)
{
	if(g_nWatchSockPortBase + nIdx <= 65535)
		return SUCCESS;
	return ERROR_CHECK_PORT;
}

/*
	函数说明：创建线程的函数
	参数说明：nIdx指，创建nIdx下标的线程
*/
u16 CreateFun(int nIdx)
{
	OspPrintf(1, 0, "create fun %d here ... \n", nIdx);	
#ifdef _MY_DEBUG_
	OspDelay(10);
#endif

	fd_set SockFdSet = {0}, SockFdSetTmp = {0};
	FD_ZERO(&SockFdSetTmp);
	FD_SET(g_hWatchSock[nIdx], &SockFdSetTmp);
	SockFdSet = SockFdSetTmp;
	struct timeval tm = {0};
	tm.tv_sec = 0;
	tm.tv_usec = 300;
	
	OspSemTake(&g_hSem[nIdx]);  
	while(1)
	{
		SockFdSet = SockFdSetTmp;
#ifdef _MY_DEBUG_
		OspDelay(1000);
#endif
		if(true == g_bExit[nIdx])
		{
			break;
		}
		//设置轮询
		u16 wRet = select(1024, &SockFdSet, NULL, NULL, &tm);
		if(SOCKET_ERROR == wRet)//报错
		{
			SockFdSet = SockFdSetTmp;
			continue;
		}
		else if(0 == wRet) //超时
		{
			continue;
		}
		else
		{
			if(FD_ISSET(g_hWatchSock[nIdx], &SockFdSet))
			{
				u8 abyCmd[10] = {0};
				wRet = recvfrom(g_hWatchSock[nIdx], (char*)abyCmd, sizeof(abyCmd), 0, 0, 0);
				if(wRet < 0)
				{
					OspPrintf(1, 0, "%s(%d) rcv error, wRet = %d\n", __FUNCTION__, __LINE__, wRet);
					return ERROR_RECV_FROM;
				}
				if(strncmp((const char *)abyCmd, "exit", sizeof("exit")))
				{
					g_bExit[nIdx] = true;
				}
			}
		}
	}
	OspSemGive(&g_hSem[nIdx]);
	return SUCCESS;
}

/*
	函数说明：处理create消息
	参数说明：收到创建nIdx的消息
*/
u16 MsgCreate(int nIdx)
{
	if(nIdx >= 10 || nIdx < 0)
	{
		OspPrintf(1, 0, "scanf idx error, %s(%d), idx = %d\n", __FUNCTION__, __LINE__, nIdx);
		return ERROR_PARAM;
	}
	if(g_hTaskHandle[nIdx] != NULL)
	{
		OspPrintf(1, 0, "%s(%d), %d taskHandle has been created, please try again later\n", __FUNCTION__, __LINE__, nIdx);
		return ERROR_PARAM;
	}	
	if(CheckPort(nIdx) != SUCCESS)
	{
		OspPrintf(1, 0, "%s(%d) Port %d can not use!\n", __FUNCTION__, __LINE__, g_nWatchSockPortBase+nIdx);
		return ERROR_CHECK_PORT;
	}
	
	//创建套接字, 主线程直接创建
	if((g_hWatchSock[nIdx] = socket(AF_INET, SOCK_DGRAM, 0)) == NULL)
	{
		OspPrintf(1, 0, "%s(%d), g_hWatchSock[%d] create error\n", __FUNCTION__, __LINE__, nIdx);
		return ERROR_SOCK_CREATE;
	}
	struct sockaddr_in tMyAddr = {0};
	tMyAddr.sin_family = AF_INET;
	tMyAddr.sin_port = htons(g_nWatchSockPortBase+nIdx);
	tMyAddr.sin_addr.s_addr = 0;	
	if(SOCKET_ERROR == (bind(g_hWatchSock[nIdx], (struct sockaddr*)&tMyAddr, sizeof(tMyAddr))))
	{
		OspPrintf(1, 0, "%s(%d), g_hWatchSock[%d] bind error\n", __FUNCTION__, __LINE__, nIdx);
		return ERROR_SOCK_BIND;
	}
	
	//设置非阻塞
	unsigned long ulTimeOut = 1;
	if(SOCKET_ERROR == ioctlsocket(g_hWatchSock[nIdx], FIONBIO, (unsigned long*)&ulTimeOut))
	{
		OspPrintf(1, 0, "%s(%d), g_hWatchSock[%d] ioctlsocket error\n", __FUNCTION__, __LINE__, nIdx);
		return FAILURE;
	}
	
	g_nList.push_back(nIdx);	//记录顺序
	g_bExit[nIdx] = false;
	g_hTaskHandle[nIdx] = OspTaskCreate(CreateFun, "create_function", 60, 512*1024, nIdx, NULL, NULL);
	if(NULL == g_hTaskHandle[nIdx])
	{
		OspPrintf(1, 0, "OspTaskCreate error, %s(%d) idx = %d\n", __FUNCTION__, __LINE__, nIdx);
		return ERROR_TASK_CREATE;	
	}
#ifdef _MY_DEBUG_
	OspDelay(50);
#endif
	return SUCCESS;
}

/*
	函数说明：线程退出后，将nIdx从全局链表中删除
*/
u16 EraseTaskHandle(int nIdx)
{
	for(list<int>::iterator it = g_nList.begin(); it != g_nList.end(); it++)
	{
		if(*it == nIdx)
		{
			g_nList.erase(it);
			return SUCCESS;
		}
	}
	OspPrintf(1, 0, "%s(%d) not found No.%d thread in g_nList\n", __FUNCTION__, __LINE__, nIdx);
	return ERROR_ERASE;
}

/*
	函数说明：发送exit消息，退出线程
	参数说明：销毁下标为nIdx的线程
*/
u16 ReleaseThread(int nIdx)
{
	//校验退出的TaskHandle是否存在
	if(NULL == g_hTaskHandle[nIdx])
	{
		OspPrintf(1, 0, "%s(%d) param check error,g_hTaskHandle[%d] = NULL", __FUNCTION__, __LINE__, nIdx);
		return ERROR_PARAM;
	}
	const char* abyCmd = "exit";
	//发送退出消息
	struct sockaddr_in tDestAdd = {0};
	tDestAdd.sin_addr.s_addr = inet_addr("127.0.0.1");
	tDestAdd.sin_family = AF_INET;
	tDestAdd.sin_port = htons(g_nWatchSockPortBase+nIdx);
	
	u16 wRet = sendto(g_hWatchSock[nIdx], abyCmd, sizeof("exit"), 0, (struct sockaddr*)&tDestAdd, sizeof(tDestAdd));
	if(SOCKET_ERROR == wRet)
	{
		OspPrintf(1, 0, "%s(%d) send exit msg error\n", __FUNCTION__, __LINE__);
		return ERROR_SOCK_SEND;
	}
	OspPrintf(1, 0, "release No.%d thread here...\n", nIdx);
	return SUCCESS;
}

/*
	函数说明：清理线程
	参数说明：清理nIdx的线程
*/
u16 MsgClear(int nIdx)
{
	u16 wRet = FAILURE;
	if(nIdx < 0 && !g_nList.empty() && (SUCCESS == CheckThread(g_nList.front())))
	{
		wRet = ReleaseThread(g_nList.front());
		if(wRet != SUCCESS)
		{
			OspPrintf(1, 0, "%s(%d) ReleaseThread error, wRet = %d\n", __FUNCTION__, __LINE__, wRet);
			return ERROR_RELEASE;
		}
		g_nList.pop_front();
	}
	else if(SUCCESS == CheckThread(nIdx))
	{
		wRet = ReleaseThread(nIdx);
		if(wRet != SUCCESS)
		{
			OspPrintf(1, 0, "%s(%d) release thread error, wRet = %d\n", __FUNCTION__, __LINE__, wRet);
			return ERROR_RELEASE;
		}
		wRet = EraseTaskHandle(nIdx);
		if(wRet != SUCCESS)
		{
			OspPrintf(1, 0, "%s(%d) EraseTaskHandle error, wRet = %d\n", __FUNCTION__, __LINE__, wRet);
			return ERROR_ERASE;
		}
	}
	if(false == OspSemTakeByTime(g_hSem[nIdx], 3000))
	{
		OspPrintf(1, 0, "%s(%d) g_hSem[%d] take timeout, forced withdrawal\n", __FUNCTION__, __LINE__, nIdx);
		OspTaskTerminate(g_hTaskHandle[nIdx]);//强制退出
	}

	OspSemGive(g_hSem[nIdx]);

	CloseHandle(g_hTaskHandle[nIdx]);
	return SUCCESS;
}
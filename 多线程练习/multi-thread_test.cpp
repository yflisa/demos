#include <stdio.h>
#include <iostream>
#include <sstream>
#include <string>
#include <kdvdef.h>

#include <winsock2.h>
#include "common.h"

using namespace std;
#define SUCCESS (0)
#define FAILURE (-1)
FILE* g_pFd = NULL;

#define _MY_DEBUG_
int main()
{
	u16 wRet = Init();
	if(wRet != SUCCESS)
	{
		Uninit();
		OspPrintf(1, 0, "init error, %s(%d)\n", __FUNCTION__, __LINE__);
		return FAILURE;
	}
	
#ifdef _MY_DEBUG_
	g_pFd = freopen("cmd.in", "r", stdin);
	if(NULL == g_pFd)
	{
		OspPrintf(1, 0, "reopen cmd.in error, %s(%d)\n", __FUNCTION__, __LINE__);
		Uninit();
		return FAILURE;
	}
#endif
	
	string strCmd;			//具体的命令
	char abyTmp[10] = {0};
	s32 nIdx = 0;
#ifdef _MY_DEBUG_
	while(!feof(g_pFd))
#else
	while(1)
#endif
	{
		nIdx = -1;
		//从文件中读入命令以及线程id,并处理
		gets(abyTmp);
		string strCmdLine(abyTmp);
		istringstream ss(strCmdLine);
		ss >> strCmd >> nIdx;

		//创建线程
		if(!strCmd.compare("create"))
		{
			wRet = MsgCreate(nIdx);
			if(wRet != SUCCESS)
			{
				OspPrintf(1, 0, "MsgCreate error, wRet = %d\n", __FUNCTION__, __LINE__, wRet);
				Uninit();
				return FAILURE;
			}
		}
		//释放线程
		else if(!strCmd.compare("clear"))
		{
#ifdef _MY_DEBUG_
			OspDelay(20);
#endif
			wRet = MsgClear(nIdx);
			if(wRet != SUCCESS)
			{
				OspPrintf(1, 0, "%s(%d) MsgCreate error, wRet = %d\n", __FUNCTION__, __LINE__, wRet);
				Uninit();
				return FAILURE;
			}
		}
		else if(!strCmd.compare("quit"))
		{
			OspPrintf(1, 0, "exit main thread now ...\n", __FUNCTION__, __LINE__);
			break;
		}
		else 
		{
			OspPrintf(1, 0, "invalid command...\n", __FUNCTION__, __LINE__);
			continue;
		}
#ifdef _MY_DEBUG_
		OspDelay(30);
#endif
	}
	fclose(g_pFd);
	Uninit();
	return 0;
}
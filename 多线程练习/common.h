#ifndef __MULTI_THREAD_TEST__
#define __MULTI_THREAD_TEST__
#include <osp.h>

/*
	函数说明：初始化
*/
u16 Init();

/*
	函数说明：反初始化
*/
void Uninit();

/*
	函数说明：创建线程的函数
	参数说明：nIdx指，创建nIdx下标的线程
*/
u16 CreateFun(int nIdx);

/*
	函数说明：发送create消息
	参数说明：收到创建nIdx的消息后进行处理
*/
u16 MsgCreate(int nIdx);

/*
	函数说明：检测下标为nIdx的线程是否已经创建
*/
u16 CheckThread(int nIdx);

/*
	函数说明：检测下标为g_nWatchSockPortBase+nIdx的端口是否可用
*/
u16 CheckPort(int nidx);

/*
	函数说明：线程退出后，将nIdx从全局链表中删除
*/
u16 EraseTaskHandle(int nIdx);

/*
	函数说明：退出线程
*/
u16 ReleaseThread(int nIdx);

/*
	函数说明：发送exit消息
*/
u16 MsgClear(int nIdx);

#endif
#ifndef __MULTI_THREAD_TEST__
#define __MULTI_THREAD_TEST__
#include <osp.h>

/*
	����˵������ʼ��
*/
u16 Init();

/*
	����˵��������ʼ��
*/
void Uninit();

/*
	����˵���������̵߳ĺ���
	����˵����nIdxָ������nIdx�±���߳�
*/
u16 CreateFun(int nIdx);

/*
	����˵��������create��Ϣ
	����˵�����յ�����nIdx����Ϣ����д���
*/
u16 MsgCreate(int nIdx);

/*
	����˵��������±�ΪnIdx���߳��Ƿ��Ѿ�����
*/
u16 CheckThread(int nIdx);

/*
	����˵��������±�Ϊg_nWatchSockPortBase+nIdx�Ķ˿��Ƿ����
*/
u16 CheckPort(int nidx);

/*
	����˵�����߳��˳��󣬽�nIdx��ȫ��������ɾ��
*/
u16 EraseTaskHandle(int nIdx);

/*
	����˵�����˳��߳�
*/
u16 ReleaseThread(int nIdx);

/*
	����˵��������exit��Ϣ
*/
u16 MsgClear(int nIdx);

#endif
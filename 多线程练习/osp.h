/******************************************************************************
ģ����    : OSP
�ļ���    : osp.h
����    : OSP���ͷ�ļ�
�汾    ��KDM 3.9
******************************************************************************/
/*************************************************
ģ��汾��OSP.1.5.20130821
���ӹ��ܣ�64λ��Ǩ �ӿڵ���
�޸�ȱ�ݣ���
�ύ�ˣ����
******************************************************************************/
/*************************************************
ģ��汾��OSP.1.4.7.20081008
���ӹ��ܣ�ȥ������select���ƣ�����epoll�����в��ֿ�ƽ̨�ӿ��Ż���
�޸�ȱ�ݣ���
�ύ�ˣ����Ҿ�
**************************************************/
/*************************************************
ģ��汾��OSP.1.4.7.20080526
���ӹ��ܣ�ͬÿ����ͬ���������Сд����
�޸�ȱ�ݣ���
�ύ�ˣ���һƽ
**************************************************/
/*************************************************
ģ��汾��OSP.1.4.6.20080520
���ӹ��ܣ����send�������⣬����socket�ķ��ͳ�ʱ���
�޸�ȱ�ݣ���
�ύ�ˣ���һƽ
**************************************************/
/*************************************************
ģ��汾��OSP.1.4.5.20080311
���ӹ��ܣ�vx��msToTick��������ʹ��u64��������
�޸�ȱ�ݣ���
�ύ�ˣ���һƽ
**************************************************/
/*************************************************
ģ��汾��OSP.1.4.4.20080125
���ӹ��ܣ�OspConnectTcpNode�����������ӵ������ڶ˿�ȴ������ȷ
�޸�ȱ�ݣ���
�ύ�ˣ���һƽ
**************************************************/
/*************************************************
ģ��汾��OSP.1.4.3.20071214
���ӹ��ܣ�osp timer mstotick����������
�޸�ȱ�ݣ���
�ύ�ˣ���һƽ
**************************************************/
/*************************************************
ģ��汾��OSP.1.4.2.20071211
���ӹ��ܣ�osp post���ӱ�����ȷ��APPID��ӦAPP��Ч��
�޸�ȱ�ݣ���
�ύ�ˣ���һƽ
**************************************************/
/*************************************************
ģ��汾��OSP.1.4.1.20070917
���ӹ��ܣ���ȡ�豸��̫����Ϣ�Ľӿ�,ȥ�������ӡ
�޸�ȱ�ݣ���
�ύ�ˣ���һƽ
**************************************************/
/*************************************************
ģ��汾��OSP.1.4.0.20070912
���ӹ��ܣ����ӻ�ȡ�豸��̫����Ϣ�Ľӿ�
    OspGetEthernetAdapterInfoAll
    OspGetEthernetAdapterInfo
�޸�ȱ�ݣ���
�ύ�ˣ���һƽ
**************************************************/
/*************************************************
ģ��汾��OSP.1.3.3.20070824
���ӹ��ܣ�����OspTickGet��Linux�汾�µ������ǰ�������ڣ�times(NULL)ϵͳ���÷���-1������
      �����ڸ�������ʱ��ͨ��errno�������ʵtick
�޸�ȱ�ݣ���
�ύ�ˣ���һƽ
**************************************************/
/*************************************************
ģ��汾��OSP.1.3.2.20070824
���ӹ��ܣ��޸�linux-select�µ�TCPconnect����
�޸�ȱ�ݣ���
�ύ�ˣ���һƽ
**************************************************/
/*************************************************
ģ��汾��OSP.1.3.1.20070823
���ӹ��ܣ�����OspTickGet64�ӿ�,���Linux, Windows��32λtick�������������;
      �ù��ܽ���windows, linux��ʵ��;
�޸�ȱ�ݣ���
�ύ�ˣ���һƽ
**************************************************/
/*************************************************
ģ��汾��OSP.1.2.2.20070822
���ӹ��ܣ�Э����OSP,���KDM3900002519,
      �Զ˶����󣬱����޷�connect�ϵ����⣻OSPConnectTcpNode���getsocketopt����жϴ���������
�޸�ȱ�ݣ�KDM3900002519
�ύ�ˣ���һƽ
**************************************************/
/*************************************************
ģ��汾��OSP.1.2.1.20070727
���ӹ��ܣ�Э����OSP,��ȡCPU�����ʵĺ����У�ʹ���˾�̬����������û�м�������������»���ɼ������
�޸�ȱ�ݣ���
�ύ�ˣ���һƽ
**************************************************/
/*************************************************
ģ��汾��OSP.1.2.0.20070726
���ӹ��ܣ�Э����OSP,�޸�OSP.h���ֽṹ������ͬ��հ汾һ��
�޸�ȱ�ݣ���
�ύ�ˣ���һƽ
**************************************************/
/*************************************************
ģ��汾��OSP.1.1.5.20070725
���ӹ��ܣ�Э����OSP,ȥ���ź���ͳ�ƹ��ܣ��ź����ܶ������µ���Ч�ʼ�����£����ȥ��
�޸�ȱ�ݣ���
�ύ�ˣ���һƽ
**************************************************/
/*************************************************
ģ��汾��OSP.1.1.4.20070721
���ӹ��ܣ�Э����OSP,����OspTaskShow�е�ȫ�������¼���ݵĻ��Ᵽ�����Լ�������Խ����
�޸�ȱ�ݣ���
�ύ�ˣ���һƽ
**************************************************/
/*************************************************
ģ��汾��OSP.1.1.3.20070717
���ӹ��ܣ�Э����OSP,�޸�����TCP_NODELAYϵͳ����ʱ�ı���LEVELӦ����IPPROTO_TCP������SOL_SOCKET
�޸�ȱ�ݣ���
�ύ�ˣ���һƽ
**************************************************/
/*************************************************
ģ��汾��OSP.1.1.2.20070710
���ӹ��ܣ�Э����OSP,�ṩ�ļ���־����
�޸�ȱ�ݣ���
�ύ�ˣ���һƽ
**************************************************/
/*************************************************
ģ��汾��OSP.1.1.1.20070625
���ӹ��ܣ�Э����OSP��ʼ�汾
�޸�ȱ�ݣ���
�ύ�ˣ���һƽ
**************************************************/
#ifndef _OSP_H
#define _OSP_H

///////////////////////////////////////////////////////////////////
//    Linux ����ϵͳͷ�ļ�
///////////////////////////////////////////////////////////////////
#ifdef _LINUX_

    #ifdef PWLIB_SUPPORT
        #include <ptlib.h>
    #endif

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <assert.h>
    #include <stdarg.h>
    #ifndef _IOS_
    #include <malloc.h>
    #endif
    #include <errno.h>
    #include <unistd.h>
    #include <pthread.h>
    #include <semaphore.h>
    #include <sys/types.h>
    #include "sys/wait.h"
    #include <sys/stat.h>
    #include <sys/socket.h>
    #include <sys/time.h>
    #include <sys/times.h>
    #include <netinet/in.h>
    #include <netinet/tcp.h>
    #include <arpa/inet.h>
    #include <termios.h>
    #include <signal.h>
    #ifdef __cplusplus
		#ifndef _OSP_NOT_INCLUDE_NEW_	//<new>��ubuntu�»�����stl��min/max���壨������3����������ʽ���������׸������ط��Ķ����ͻ
		#include <new>
		#endif
    #endif
    #include "dirent.h"
#include "syslog.h"

    #ifndef _EQUATOR_
    #if !defined (_ANDROID_) && !defined(_ARM_) && !defined (_IOS_)
        #include <mqueue.h>
    #endif
    #ifndef _IOS_
        #include <sys/epoll.h>
    #endif  //_IOS_
        #include <sys/resource.h>
    #endif  //_EQUATOR_

#endif //_LINUX_

///////////////////////////////////////////////////////////////////
//    Vxworks ����ϵͳͷ�ļ�
///////////////////////////////////////////////////////////////////
#ifdef _VXWORKS_

    #include <vxworks.h>
    #include <tasklib.h>
    #include <msgqlib.h>
    #include <syslib.h>
    #include <memLib.h>
    #include <stdlib.h>
    #include <string.h>
    #include <sockLib.h>
    #include <inetLib.h>
    #include <stdioLib.h>
    #include <strLib.h>
    #include <hostLib.h>
    #include <ioLib.h>
    #include <assert.h>
    #include <netdb.h>
    #include <errno.h>
    #include <sys/stat.h>
    #include <taskHookLib.h>
    #include <logLib.h>
    //����֧��
    #include "brddrvlib.h"

#endif // _VXWORKS_

///////////////////////////////////////////////////////////////////
//    Win32 ����ϵͳͷ�ļ�
///////////////////////////////////////////////////////////////////
#ifdef _MSC_VER

//     #ifdef _WIN32_WINNT
//         #undef _WIN32_WINNT
//     #endif
//     #define _WIN32_WINNT 0x0400

//     #ifdef WINVER
//         #undef WINVER
//     #endif
//     #define WINVER 0x0400

#include <malloc.h>
#ifdef __cplusplus
	#ifndef _OSP_NOT_INCLUDE_NEW_	//<new>��ubuntu�»�����stl��min/max���壨������3����������ʽ���������׸������ط��Ķ����ͻ
	#include <new>
	#endif
#endif

//     #ifndef _WINDOWS_
//         #include <afx.h>
//         #include <afxwin.h>
//         #include <winsock2.h>
//     #else
     #ifndef WIN32_LEAN_AND_MEAN
     #define WIN32_LEAN_AND_MEAN
     #endif
	 #pragma pack(8)//��ֹ64λasf��select����-1(10038)����
        #include <winsock2.h>
	 #pragma pack()
        #include <windows.h>

//   #endif
    #include <string.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <limits.h>
    #include <time.h>
    #include <stddef.h>
    #include <assert.h>
    #include <stdarg.h>
    #ifndef _AFX_NO_DEBUG_CRT
    #ifndef _INC_CRTDBG
    #include <crtdbg.h>
    #endif
    #endif // _AFX_NO_DEBUG_CRT
    #pragma comment(lib,"Ws2_32.lib")

#endif    // _MSC_VER

///////////////////////////////////////////////////////////////////
//    ����ϵͳͷ�ļ������Ͷ��壩
///////////////////////////////////////////////////////////////////
#include "kdvtype.h"

///////////////////////////////////////////////////////////////////
//    ����ϵͳ����������Ͷ���
///////////////////////////////////////////////////////////////////
#ifdef _LINUX_

#ifndef BOOLTYPE
#define BOOLTYPE
    typedef s32                   BOOL;
#endif

#ifndef TRUE
#define  TRUE                (1)
#endif

#ifndef FALSE
#define  FALSE               (0)
#endif

    typedef void *(*LINUXFUNC)(void *);

    #define SEMHANDLE             pthread_cond_t*
    #define TASKHANDLE            pthread_t
    #define TASKID                pthread_t     //����IOS��pthread_t��һ��ָ�룬��˵�������һ��ttaskid,����ǿת��u32
	#ifdef __cplusplus
    #define OSP_NEW               new(std::nothrow)
	#endif//OSP_NEW
#endif    // _LINUX_

#ifdef _VXWORKS_

    #define SEMHANDLE             SEM_ID
    #define TASKHANDLE            u32
    #define TASKID              u32
    #define  OSP_NEW             new
#endif    // _VXWORKS_

#ifndef _MSC_VER

//    typedef unsigned long long    u64;
    #define SOCKHANDLE            int
    #define SERIALHANDLE          int
	#define MAILBOXID             u32

    #ifndef SOCKADDR
        #define SOCKADDR          struct sockaddr
    #endif
    #define SOCKADDR_IN           struct sockaddr_in

	#ifndef OSP_NEW
		#define OSP_NEW                  new
	#endif
#endif    // _MSC_VER

#ifdef _MSC_VER

    #define SEMHANDLE             HANDLE
    #define TASKHANDLE            HANDLE
    #define MAILBOXID             HANDLE
    #define SOCKHANDLE            SOCKET
    #define SERIALHANDLE          HANDLE
    #define TASKID                u32
	#define  OSP_NEW               new(std::nothrow)
#endif    // _MSC_VER

///////////////////////////////////////////////////////////////////
//    ����ϵͳ��غ궨��
///////////////////////////////////////////////////////////////////
#ifdef _LINUX_

    #define SOCKET_ERROR          (-1)
    #define INVALID_SOCKET        (-1)
    #define INVALID_SERIALHANDLE  (-1)

    #define OSP_NO_WAIT           0
    #define OSP_WAIT_FOREVER      (-1)

    //SockShutdown����
    #define STOP_RECV             0
    #define STOP_SEND             1
    #define STOP_BOTH             2

#endif // _LINUX_

#ifdef _VXWORKS_

    #define SOCKET_ERROR          ERROR
    #define INVALID_SOCKET        ERROR
    #define INVALID_SERIALHANDLE  ERROR

    #define OSP_NO_WAIT           NO_WAIT
    #define OSP_WAIT_FOREVER      WAIT_FOREVER

#endif    // _VXWORKS_

#ifdef _MSC_VER

    #define INVALID_SERIALHANDLE  INVALID_HANDLE_VALUE
    #define TOspCommTimeouts      COMMTIMEOUTS
    #define TOspDCB               DCB
    #define TOspComStat           COMSTAT

    #define OSP_NO_WAIT           ((int)0)
    #define OSP_WAIT_FOREVER      ((int)-1)

#endif    // _MSC_VER

///////////////////////////////////////////////////////////////////
//    ����ϵͳ�޹غ궨��
///////////////////////////////////////////////////////////////////
// for Microsoft c++
#ifdef _MSC_VER

    //������
    #ifndef _EQUATOR_
        #pragma pack(push)
        #pragma pack(1)
    #endif

    #ifdef __cplusplus
    #define API  extern "C" __declspec(dllexport)
    #else
    #define API  __declspec(dllexport)
    #endif
// for gcc
#else
    #ifdef __cplusplus
    #define API extern "C"
    #else
    #define API
    #endif
#endif    // _MSC_VER


//OSP�汾��Ϣ
#define OSPVERSION               "OSP.MSG_COMPRESS.64Bit.20160308"

//OSP�汾��
#define OSP_VERSION_ID           0x40

#ifdef __cplusplus
//δʹ��
const u8  OSPLOCAL               = 0;
//δʹ��
const u8  TCP_GATEWAY            = 255;
//δʹ��
const u16 SECONDS                = 1000;

//ͬһ������Ӧ����
const u16 MAX_APP_NUM            = 512;
//ͬһӦ�����ʵ����
const u16 MAX_INST_NUM           = 65000;
//���ʱ����
const u16 MAX_TIMER_NUM          = 5000;
//��󴮿���
const u8  MAX_SERIALPORT_NUM     = 10;
#else
#define   OSPLOCAL               ((u8)0)
//δʹ��
#define   TCP_GATEWAY            (u8)255)
//δʹ��
#define   SECONDS                ((u16)1000)

//ͬһ������Ӧ����
#define   MAX_APP_NUM            ((u16)512)
//ͬһӦ�����ʵ����
#define   MAX_INST_NUM           ((u16)65000)
//���ʱ����
#define   MAX_TIMER_NUM          ((u16)5000)
//��󴮿���
#define   MAX_SERIALPORT_NUM     ((u16)10)
#endif //__cplusplus
#define OSP_NODE_MAX_CAPABLE     10240
#define OSP_MSG_MAX_CAPABLE      10240

//��Ч���ⲿ����
#define INVALID_NODE             0
//���ؽ���
#define LOCAL_NODE               0

//��Ч��Ӧ�ú�
#define INVALID_APP              0
//����ȫ��Ӧ�ú�
#define LOCAL_APP                0

//��Ч��ʵ����
#define INVALID_INS              0xfffb
//����ʵ����
#define LOCAL_INS                0

//Ĭ��TCP�������ʱ����(��)
#define DEFAULT_TCP_HEARTBEAT_TIME        10
//Ĭ��TCP����������(��μ���ʧ����Ϊ�Ѿ�����)
#define DEFAULT_TCP_HEARTBEAT_NUM         3
//Ĭ��OSPϵͳ״̬��ӡʱ����(��)
#define DEFAULT_STATUS_MSGOUT_TIME        3600
//������TCP�������
#define UNDETECT_TCP_HEARTBEAT            0

#ifndef MINCHAR
    #define MINCHAR              0x80
#endif

#ifndef MAXCHAR
    #define MAXCHAR              0x7f
#endif

#ifndef MINSHORT
    #define MINSHORT             0x8000
#endif

#ifndef MAXSHORT
    #define MAXSHORT             0x7fff
#endif

#ifndef MINLONG
    #define MINLONG              0x80000000
#endif

#ifndef MAXLONG
    #define MAXLONG              0x7fffffff
#endif

#ifndef MAXBYTE
    #define MAXBYTE              0xff
#endif

#ifndef MAXWORD
    #define MAXWORD              0xffff
#endif

#ifndef MAXDWORD
    #define MAXDWORD             0xffffffff
#endif

#ifndef INFINITE
    #define INFINITE            0xFFFFFFFF
#endif
#ifndef _MSC_VER

//
// Provider capabilities flags.
//

#define PCF_DTRDSR               ((u32)0x0001)
#define PCF_RTSCTS               ((u32)0x0002)
#define PCF_RLSD                 ((u32)0x0004)
#define PCF_PARITY_CHECK         ((u32)0x0008)
#define PCF_XONXOFF              ((u32)0x0010)
#define PCF_SETXCHAR             ((u32)0x0020)
#define PCF_TOTALTIMEOUTS        ((u32)0x0040)
#define PCF_INTTIMEOUTS          ((u32)0x0080)
#define PCF_SPECIALCHARS         ((u32)0x0100)
#define PCF_16BITMODE            ((u32)0x0200)

//
// Comm provider settable parameters.
//

#define SP_PARITY                ((u32)0x0001)
#define SP_BAUD                  ((u32)0x0002)
#define SP_DATABITS              ((u32)0x0004)
#define SP_STOPBITS              ((u32)0x0008)
#define SP_HANDSHAKING           ((u32)0x0010)
#define SP_PARITY_CHECK          ((u32)0x0020)
#define SP_RLSD                  ((u32)0x0040)

//
// Settable baud rates in the provider.
//
#ifdef _VXWORKS_
#define BAUD_110                 (u32)110
#define BAUD_300                 (u32)300
#define BAUD_1200                (u32)1200
#define BAUD_2400                (u32)2400
#define BAUD_4800                (u32)4800
#define BAUD_9600                (u32)9600
#define BAUD_19200               (u32)19200
#define BAUD_38400               (u32)38400
#endif

#if defined(_LINUX_) && !defined(_EQUATOR_)
#define BAUD_300                 (u32)300
#define BAUD_1200                (u32)1200
#define BAUD_2400                (u32)2400
#define BAUD_4800                (u32)4800
#define BAUD_9600                (u32)9600
#define BAUD_19200               (u32)19200
#define BAUD_38400               (u32)38400
#define BAUD_57600               (u32)57600
#define BAUD_115200              (u32)115200
#endif

// Equator��ֻ�����ò����ʣ������Ķ���������
#ifdef _EQUATOR_
// ע�⣺�������Ϊ9600
#define BAUD_110                 (u16)110
#define BAUD_300                 (u16)300
#define BAUD_600                 (u16)600
#define BAUD_1200                (u16)1200
#define BAUD_2400                (u16)2400
#define BAUD_4800                (u16)4800
#define BAUD_9600                (u16)9600
#endif

//
// Settable Data Bits
//
#if defined(_VXWORKS_) || (defined(_LINUX_) && !defined(_EQUATOR_))
#define DATABITS_5               (u8)5
#define DATABITS_6               (u8)6
#define DATABITS_7               (u8)7
#define DATABITS_8               (u8)8
#else
#define DATABITS_5               ((u16)0x0001)
#define DATABITS_6               ((u16)0x0002)
#define DATABITS_7               ((u16)0x0004)
#define DATABITS_8               ((u16)0x0008)
#define DATABITS_16              ((u16)0x0010)
#define DATABITS_16X             ((u16)0x0020)
#endif

//
// Settable Stop and Parity bits.
//
#if defined(_VXWORKS_) || (defined(_LINUX_) && !defined(_EQUATOR_))
#define STOPBITS_10              (u8)1
#define STOPBITS_20              (u8)2
#else
#define STOPBITS_10              ((u16)0x0001)
#define STOPBITS_15              ((u16)0x0002)
#define STOPBITS_20              ((u16)0x0004)
#endif

#if defined(_VXWORKS_) || (defined(_LINUX_) && !defined(_EQUATOR_))
#define PARITY_NOUSE              (u8)0                            //�ĺ����������ioctrl�еĺ�ͬ��
#define PARITY_ODD               (u8)1
#define PARITY_EVEN              (u8)2
#define PARITY_MARK              (u8)3
#define PARITY_SPACE             (u8)4
#else
#define PARITY_NOUSE              ((u16)0x0100)
#define PARITY_ODD               ((u16)0x0200)
#define PARITY_EVEN              ((u16)0x0400)
#define PARITY_MARK              ((u16)0x0800)
#define PARITY_SPACE             ((u16)0x1000)
#endif
//
// DTR Control Flow Values.
//
#define DTR_CONTROL_DISABLE      0x00
#define DTR_CONTROL_ENABLE       0x01
#define DTR_CONTROL_HANDSHAKE    0x02

//
// RTS Control Flow Values
//
#define RTS_CONTROL_DISABLE      0x00
#define RTS_CONTROL_ENABLE       0x01
#define RTS_CONTROL_HANDSHAKE    0x02
#define RTS_CONTROL_TOGGLE       0x03

#define NOPARITY                 0
#define ODDPARITY                1
#define EVENPARITY               2
#define MARKPARITY               3
#define SPACEPARITY              4

#define ONESTOPBIT               0
#define ONE5STOPBITS             1
#define TWOSTOPBITS              2

//
// Escape Functions
//

#define SETXOFF                  1        // Simulate XOFF received
#define SETXON                   2        // Simulate XON received
#define SETRTS                   3        // Set RTS high
#define CLRRTS                   4        // Set RTS low
#define SETDTR                   5        // Set DTR high
#define CLRDTR                   6        // Set DTR low
#define RESETDEV                 7        // Reset device if possible
#define SETBREAK                 8        // Set the device break line.
#define CLRBREAK                 9        // Clear the device break line.

//
// PURGE function flags.
//
#define PURGE_TXABORT            0x0001    // Kill the pending/current writes to the comm port.
#define PURGE_RXABORT            0x0002    // Kill the pending/current reads to the comm port.
#define PURGE_TXCLEAR            0x0004    // Kill the transmit queue if there.
#define PURGE_RXCLEAR            0x0008    // Kill the typeahead buffer if there.

typedef struct
{
    u32 ReadIntervalTimeout;
    u32 ReadTotalTimeoutMultiplier;
    u32 ReadTotalTimeoutConstant;
    u32 WriteTotalTimeoutMultiplier;
    u32 WriteTotalTimeoutConstant;
} TOspCommTimeouts;

typedef struct
{
    u32 DCBlength;              // sizeof(DCB)
    u32 BaudRate;               // current baud rate
    u32 fBinary: 1;             // binary mode, no EOF check
    u32 fParity: 1;             // enable parity checking
    u32 fOutxCtsFlow:1;         // CTS output flow control
    u32 fOutxDsrFlow:1;         // DSR output flow control
    u32 fDtrControl:2;          // DTR flow control type
    u32 fDsrSensitivity:1;      // DSR sensitivity
    u32 fTXContinueOnXoff:1;    // XOFF continues Tx
    u32 fOutX: 1;               // XON/XOFF out flow control
    u32 fInX: 1;                // XON/XOFF in flow control
    u32 fErrorChar: 1;          // enable error replacement
    u32 fNull: 1;               // enable null stripping
    u32 fRtsControl:2;          // RTS flow control
    u32 fAbortOnError:1;        // abort on error
    u32 fDummy2:17;             // reserved
    u32 wReserved;              // not currently used
    u16 XonLim;                 // transmit XON threshold
    u16 XoffLim;                // transmit XOFF threshold
    u8 ByteSize;                // number of bits/Byte, 4-8
    u8 Parity;                  // 0-4=no, odd, even, mark, space
    u8 StopBits;                // 0, 1, 2 = 1, 1.5, 2
    s8 XonChar;                 // Tx and Rx XON character
    s8 XoffChar;                // Tx and Rx XOFF character
    s8 ErrorChar;               // error replacement character
    s8 EofChar;                 // end of input character
    s8 EvtChar;                 // received event character
    u16  wReserved1;            // reserved; do not use
}TOspDCB;

typedef struct
{
    u32 fCtsHold : 1;
    u32 fDsrHold : 1;
    u32 fRlsdHold : 1;
    u32 fXoffHold : 1;
    u32 fXoffSent : 1;
    u32 fEof : 1;
    u32 fTxim : 1;
    u32 fReserved : 25;
    u32 cbInQue;
    u32 cbOutQue;
} TOspComStat;

#endif //#ifndef _MSC_VER

#ifdef __cplusplus
// ���ݽ��ţ�APP�źͱ���ʵ���Ź���ȫ��ʵ��ID
inline u32 MAKEIID(u16 wAppID, u16 wInsID = 0, u8 = 0) // u8 byUnused = 0
{
    return (wAppID << 16) + wInsID;
}

// ��ID�л��Ӧ�ú�
inline u16 GETAPP(u32 dwGlobIID)
{
    return (u16)(dwGlobIID >> 16);
}

// ��ID�л�����غ�
inline u8 GETGATE(u32 = 0)// u32 dwID = 0
{
    return 0;
}

// ��ID�л��ʵ����
inline u16 GETINS(u32 dwGlobIID)
{
    return (u16)(dwGlobIID);
}

// ��ID�л��ʵ���ŵĵ��ֽ�
inline u8 GETINSL(u32 dwGlobIID)
{
    return (u8)(dwGlobIID);
}

// ��ID�л��ʵ���ŵĸ��ֽ�
inline u8 GETINSH(u32 dwGlobIID)
{
    return (u8)(dwGlobIID >> 8);
}
#endif //__cplusplus
//telnet�ն���ʾ����󳤶�
#define MAX_PROMPT_LEN                21

// OSP������
#define OSP_ERROR_BASE                0
//�����ɹ�
#define OSP_OK                        (OSP_ERROR_BASE + 0)
//����ʧ��
#define OSP_ERROR                     (OSP_ERROR_BASE + 1)
//δʹ��
#define OSPERR_SEND_FAIL              (OSP_ERROR_BASE + 2)
//����ͬ����Ϣ��ʱ
#define OSPERR_SEND_TIMEOUT           (OSP_ERROR_BASE + 3)
//ͬ����ϢӦ�𳬳�
#define OSPERR_SYNCACK_EXCEED         (OSP_ERROR_BASE + 4)
//ͬһӦ����ʵ�������Ѿ�����
#define OSPERR_ALIAS_REPEAT           (OSP_ERROR_BASE + 5)
//δʹ��
#define OSPERR_APP_REPEAT             (OSP_ERROR_BASE + 6)
//�ⲿ������Ч
#define OSPERR_NODE_INVALID           (OSP_ERROR_BASE + 7)
//������Ч
#define OSPERR_ILLEGAL_PARAM          (OSP_ERROR_BASE + 8)
//ͬ����Ϣ�Զ���Ӧ��
#define OSPERR_PEER_NOT_RESPOND       (OSP_ERROR_BASE + 9)

//�����Ϣ����
#define MAX_MSG_LEN                   (u16)0xC000 //48K
//ʵ��������󳤶�
#define MAX_ALIAS_LEN                 (u8)255
//���ͬ����ϢӦ�𳤶�
#define MAX_SYNCACK_LEN               MAX_MSG_LEN
//������ݳ���(δʹ��)
#define MAX_DATA_LEN                  (MAX_MSG_LEN+MAX_ALIAS_LEN+MAX_SYNCACK_LEN)

//OSP��Ϣ����
// �첽��Ϣ
#define MSG_TYPE_ASYNC                (u16)0
// ͬ����Ϣ
#define MSG_TYPE_SYNC                 (u16)1
// ͬ��Ӧ����Ϣ
#define MSG_TYPE_SYNCACK              (u16)2
// ȫ��ͬ����Ϣ
#define MSG_TYPE_GSYNC                (u16)3
// ȫ��ͬ��Ӧ����Ϣ
#define MSG_TYPE_GSYNCACK             (u16)4
// ��ʱ��Ϣ
#define MSG_TYPE_TIMEOUT              (u16)5

//�л�ʵ��״̬��
#define NEXTSTATE(x)                  NextState(x,#x)

//OSP �û��Զ�����Ϣ�¼��Ż�׼(С�ڸ�ֵ����ϢΪOSP������Ϣ���ϲ��ֹ���͸���Ϣ)
#define OSP_USEREVENT_BASE            (u16)0x0400
#ifdef __cplusplus
//������Ϣ�¼���
#define OSPEVENT(x, y)                 const u16 x = y
#endif

//δʹ��
#define  OSP_CONFIRM         ((u16)0xff)
//�����������
#define  OSP_POWERON         ((u16)0x100)
//δʹ��
#define  OSP_SWITCHMASTER    ((u16)0x101)
//δʹ��
#define  OSP_SWITCHSLAVE     ((u16)0x102)
//������޿���ʵ��
#define  OSP_OVERFLOW        ((u16)0x103)
//δʹ��
#define  OSP_EXCEPTION_IND   ((u16)0x104)
//δʹ��
#define  OSP_INSNOTEXIST      ((u16)0x105)
//��Զ�˽���TCP��·�Ѷ�
#define  OSP_DISCONNECT        ((u16)0x106)
//�㲥��Ϣȷ��Ӧ��
#define  OSP_BROADCASTACK     ((u16)0x107)
//δʹ��
#define  OSP_NODECLOSE        ((u16)0x108)
//�������̽����Ϣ
#define  OSP_NETBRAECHO       ((u16)0x109)
//�������̽����Ϣȷ��Ӧ��
#define  OSP_NETBRAECHOACK    ((u16)0x110)
//OSPж����Ϣ
#define  OSP_QUIT             ((u16)0x120)
//����ͨ�Ų�����Ϣ
#define  OSP_NETSTATEST       ((u16)0x121)
//����ͨ�Ų�����Ϣȷ��Ӧ��
#define  OSP_NETSTATESTACK    ((u16)0x122)
//δʹ��
#define  OSP_APPCONN_ACK      ((u16)0x123)
//֧����Ϣѹ��
#define  OSP_COMPRESS_SUPPORT ((u16)0x222) //by wubin 2011-4-13
//ѹ����Ϣ��
#define  OSP_COMPRESS_MSG     ((u16)0x223) //by wubin 2011-4-13
//SIP���͵���Ϣ ��Ϣ�ṹCOspSipMessage
#define  OSP_SIP_MSG           (OSP_COMPRESS_MSG + 1) // 0x224

// Trc���ٱ�־
typedef enum TRCOPTION
{
    // ����״̬Ǩ��
    TRCSTATE     = 1,
    // �����¼�
    TRCEVENT     = 2,
    // ���ٶ�ʱ��
    TRCTIMER     = 4,
}TRCOPTION;

//״̬ԾǨ���¼�����ʱ��������
#define TRCALL       (u16)(TRCSTATE|TRCEVENT|TRCTIMER)

// 1.1���Ժ�֧��ͬ����Ϣ
#if (defined OSP_VERSION_ID) && (OSP_VERSION_ID >= 0x11)
    #define SYNCMSG
#endif

#ifdef _LINUX_
    /**
     * �������紫������������
     * �κ�һ���ṹҪ�������ϴ��䣬��д��һ�������������У�
     * Ȼ��Ѵ�����������OSP����OSP������
     * ��Ҫ��ֱ��ʹ�ô���һ���ṹ
     */
    #ifdef __cplusplus
    class COspStream
    {
    public:
        //��ǰ���ݳ���
        u32 m_dwCurrSize;
        //��ǰ����
        u8 m_achData[MAX_MSG_LEN];

        COspStream()
        {
            m_dwCurrSize = 0;
            memset(m_achData, 0, sizeof(m_achData));
        }

        u32 PackElement(const u8* pbyData, u32 dwLen);
        u32 ExtractElement(u8* pbyData, u32 dwLen);
    };

    #define PackElement2(data)    PackElement((u8*)&data, sizeof(data))
    #define ExtractElement2(data)    ExtractElement((u8*)&data, sizeof(data))

    // OSP��Ϣͷ���ṹ
    class CMessage
    {
    public:
        //Դ���
        u32 srcnode;
        //Ŀ�Ľ��
        u32 dstnode;
        //Ŀ��Ӧ��ʵ��
        u32 dstid;
        //ԴĿ��ʵ��
        u32 srcid;
        //��Ϣ����
        u16 type;
        //��Ϣ��
        u16 event;
        //��Ϣ�峤��
        u16 length;
        //��Ϣ��
        u8* content;

        //���֧��ͬ����Ϣ
    #ifdef SYNCMSG
        //ͬ����ϢӦ��
        u8* output;
        //ͬ����ϢӦ�𳤶�
        u16 outlen;
        //δʹ��
        u16 expire;
    #endif

        //ʵ������
        char * dstAlias;
        //ʵ����������
        u8 dstAliasLen;

        //�õ�OSP��Ϣͷ������
        static u32 GetPackedSize()
        {
            return sizeof(u32) + sizeof(u32) + sizeof(u32) + sizeof(u32) + sizeof(u16) +
                    sizeof(u16) + sizeof(u16) + sizeof(u8 *) +
                    #ifdef SYNCMSG
                        sizeof(u8 *) + sizeof(u16) + sizeof(u16) +
                    #endif
                    sizeof(char *) + sizeof(u8);
        };

        //OSP��Ϣͷ�����
        void Pack(COspStream& tStream);
        //OSP��Ϣͷ�����
        void Extract(COspStream& tStream);
    };
	#endif // __cplusplus
#else
    #ifdef __cplusplus
    // OSP��Ϣͷ���ṹ
    typedef struct CMessage
    {
        //Դ���
        u32 srcnode;
        //Ŀ�Ľ��
        u32 dstnode;
        //Ŀ��Ӧ��ʵ��
        u32 dstid;
        //ԴĿ��ʵ��
        u32 srcid;
        //��Ϣ����
        u16 type;
        //��Ϣ��
        u16 event;
        //��Ϣ�峤��
        u16 length;
        //��Ϣ��
        u8 *content;

        //���֧��ͬ����Ϣ
    #ifdef SYNCMSG
        //ͬ����ϢӦ��
        u8* output;
        //ͬ����ϢӦ�𳤶�
        u16 outlen;
        //δʹ��
        u16 expire;
    #endif

        //ʵ������
        char * dstAlias;
        //ʵ����������
        u8 dstAliasLen;
    }
    //������
    #if defined(_VXWORKS_) || (defined(_LINUX_) && !defined(_EQUATOR_))
        __attribute__ ((packed))
    #endif
    CMessage;
    #endif // __cplusplus
#endif // linux

//ʵ����Ҫ��Ϣ
typedef struct
{
    u16 insid;
    u32 state;
    u16 evtrcv;
    u16 evtsnd;
}TInstInfo;
//��¼�ص�����ִ����Ϣ
#define APP_MAX_FUNCTION_NAME 30
#define APP_MAX_CALLBACK_RECORD 10 //��¼���10�εĻص�ִ����Ϣ
typedef struct
{
    u32 dwIndex; //���ۼӵ��ô����е����
    u16 wInstId; //ʵ��id
    u16 wEvent;  //�¼�id
    u16 wMsgType; //��Ϣ���� �첽��Ϣ ͬ����Ϣ��
	u32 dwStartTick; //�ص�����ִ��ǰ��ʱ��
    u32 dwEndTick;    //�ص�����ִ�к��ʱ��
	char achFunctionName[APP_MAX_FUNCTION_NAME]; //������
}TCallBackInfo;
//����Ӧ���пɱ�������ʵ����Ҫ��Ϣ����
#define MAX_INSTINFO_NUM		   60

#ifdef __cplusplus
//Ӧ�ó�����࣬��Ҫ���ڶ����û�Appģ��zTemplate
#if defined(PWLIB_SUPPORT) && defined(_LINUX_)
    class CApp: public PThread
#else
    struct KD_API CApp
#endif
{
#if defined(PWLIB_SUPPORT) && defined(_LINUX_)
    PCLASSINFO(CApp, PThread);
#endif

public:
    //Ӧ�ý�����Ϣ����
    u32 msgIncome;
    //Ӧ���Ѵ�����Ϣ����
    u32 msgProcessed;
    //Ӧ�������д��������Ϣ����(δʹ��)
    u32 msgWaiting;
    //Ӧ�������д��������Ϣ������ֵ
    u32 msgWaitingTop;
    //�Ѽ����Ķ�ʱ��Ϣ����
    u32 timerProcessed;
    //Ӧ�����������Ϣ����
    u32 maxMsgWaiting;
    //����������������Ϣ����
    u32 msgdropped;
    //Ӧ�ñ���
    char * pAppName;

    //Ӧ��������д���
    MAILBOXID queSendId;
    //Ӧ������������
    MAILBOXID queRcvId;

    /* Ϊ֧��ͬ����Ϣ�����ӵ���Ϣ���ݶ��У����ͬ����Ϣ���ͺ�Ӧ��ʱ��Ϣ
       ��Ӧ����Ϣ����֮ǰ��������Ϣ */
    //Ӧ�ñ������е���Ϣ����
    u32 bakQueMsgNum;
    //Ӧ�ñ�����д���
    MAILBOXID bakQueSendId;
    //Ӧ�ñ���������
    MAILBOXID bakQueRcvId;

    //Ӧ������ID
    TASKID taskID;

    //��Ļtrc��־ �շ���Ϣ�����Ƿ��ӡ����Ļ��־
    u16 scrnTraceFlag;

    //�ļ�trc��־ �շ���Ϣ�����Ƿ񱣴浽��־�ļ���־
    u16 fileTraceFlag;

    //��Ļlog���� Instance::log()�н��п���
    u8 scrnLogFlag;

    //�ļ�log���� Instance::log()�н��п���
    u8 fileLogFlag;

    //Ӧ��ID
    u16 appId;
    //Ӧ���������ȼ�
    u8 byAppPri;
    //Ӧ��ǰһ������ʵ����
    u16 wLastIdleInstID;

    //Ӧ��������
    TASKHANDLE hAppTask;
    //Ӧ�������ź������
    SEMHANDLE tSemMutex;

    // ��ǰ�յ�����Ϣ
    CMessage *curMsgRcv;
    // ��ǰ���͵���Ϣ��
    u16 curEvtSnd;

private:
	// ���ڼ�¼ʵ�����״̬���յ����ݵĻ��л���
	u8 byInstInfoHead;
	u8 byInstInfoTail;
	TInstInfo tInstInfo[MAX_INSTINFO_NUM];

    //���ٻص�����ִ����Ϣ
    BOOL32 m_bCallBackInfoRecFlag;//��¼�ص�ִ����Ϣ���� TRUE ��¼ FALSE ����¼
	u8 m_byCallBackIndex; //���λ����ѭ������
    u32 m_dwCallBackCount;//�ص�����ִ���ۼӵ��ܴ���
    //���ڼ�¼App����ص�����������Ϣ�Ļ��л���
	TCallBackInfo m_atCallBackInfo[APP_MAX_CALLBACK_RECORD];
public:

	CApp();

	virtual ~CApp();


    //����ʵ���Ų�ѯָ��ʵ��
    virtual class CInstance* GetInstance(u16 wInsid) = 0;
    //�趨ʵ������
    virtual BOOL32 SetInstAlias(u16 wInsID, const char* szAlias, u8 byLen) = 0;
    //���ݱ�����ѯָ��ʵ��
    virtual class CInstance* FindInstByAlias(const char* szAlias, u8 byLen) = 0;
    //�õ�Ӧ�����ʵ����
    virtual s32 GetInstanceNumber() = 0;
    //�õ�ʵ��������󳤶�
    virtual u8 GetMaxAliasLen() = 0;
    //��ʼ��ʵ��������¼��Ϣ
    virtual BOOL32 InitAliasArray() = 0;
    //���ʵ��������¼��Ϣ
    virtual BOOL32 ClearInstAlias(u16 wInsID, const char* szAlias, u8 byLen) = 0;

    //����Ӧ��
    // APP������ȼ�Ϊ80�����С��80��OSP��ǿ��Ϊ80���˺�, �û����Ե���OspSetAppPriority()��CApp::SetPriority()�������ȼ�.
    //�ɹ�����OSP_OK      //�����ɹ�    ʧ�ܷ���OSP_ERROR  //����ʧ��
    //�û���ʹ��Appʱ����Ҫ�򴴽���app����OSP_QUIT��Ϣ���˳���App
    s32 CreateApp(const char* szName, u16 wAppId, u8 byPrior, u16 wQueueSize = 80, u32 dwStackSize = 200<<10);
    //�趨Ӧ���������ȼ�
    BOOL32 SetPriority(u8 byPrior);
    //��ѯ�������ȼ�
    u8 GetPriority()
    {
        return byAppPri;
    }
    //Ӧ���˳�
    //ע��: �û���ֹ����QuitApp���û�ͨ�����app����һ��OSP_QUIT���˳���App
    void QuitApp();

    //Ӧ�ñ�������Ϣ�������Ӽ��ٲ�ѯ
    BOOL32 BakMsgNumInc();
    BOOL32 BakMsgNumDec();
    u32 GetBakMsgNum();

    //Ӧ����������Ϣ������ѯ���Ӽ���
    u32 GetMsgIncomeNum();
    void MsgIncomeNumInc();
    void MsgIncomeNumDec();

    //Ӧ�ô�����Ϣ��������
    void MsgProcessedNumInc();

    //��ѯ���������Ϣ����
    u32 GetMsgWaitingNum();

    //Ӧ�ñ����趨��ѯ
    void SetName(const char* szName);
    char * NameGet();

    //��ʱ������������
    void TimerProcessedIncrease();

    //�趨�ļ���Ļlog����
    void LogLevelSet(u8 byFileLevel, u8 byScreenLevel);
    //�趨�ļ���Ļtrc��־
    void TrcFlagSet(u16 wFileFlag, u16 wScreenFlag);

    //ʵ����Ҫ��Ϣ��ӡ
    void InstInfoShow();
    //ʵ����Ҫ��Ϣ����
    void InstInfoAdd(u16 wInsID, u32 dwState, u16 wEvtRcv, u16 wEvtSnd);

	//��ȡ��app�Ļص�����ִ����Ϣ��¼����
    BOOL32 GetCallBackInfoRecordFlag(void);
	//���ñ�app�Ļص�����ִ����Ϣ��¼����
    void   SetCallBackInfoRecordFlag(BOOL32 bFlag);

    //�ص�����ִ����Ϣ��ӡ
	void CallBackInfoShow(void);

	//�ص�����ִ����Ϣ���
	/*=============================================================================
	������      :CallBackInfoAddStart
	����        :ͳ�ƻص���������Ϣ����¼��ʼʱ��
	             ֻ��AppEntry()��ʹ�ã��Ǵ��еģ�����Ҫ��
	             ��ִ�лص�����֮ǰ����
	�㷨ʵ��    : ��������ԭ���ǣ�AppEntry()�ڲ�ʱ���Ͽ��Ա�֤����
	              Telnet��ʾ�̺߳�AppEntry()�����г�ͻ�������Ժ���
	����˵��    :
		[I] dwTick �ص�����ִ��ǰ��ʱ��
		[I] wInstId ִ�лص���ʵ��id
		[I] dwEvent �¼�id
		[I] wMsgType ��Ϣ���� MSG_TYPE_ASYNC 0 MSG_TYPE_SYNC 1
		    MSG_TYPE_SYNCACK 2  MSG_TYPE_GSYNC 3
		[I] pchFuncName ������ָ��
	����ֵ˵��  :��
	-------------------------------------------------------------------------------
	�޸ļ�¼    :
	��  ��      �汾        �޸���        �޸�����
	2015/05/20  1.0         �˲���        �½�
	===============================================================================*/
    void CallBackInfoAddStart(u32 dwTick, u16 wInstId, u16 dwEvent,
                              u16 dwMsgType,char *pchFuncName);
	/*=============================================================================
	������      :CallBackInfoAddEnd
	����        :ͳ�ƻص���������Ϣ����¼��ֹʱ��
	             ֻ��AppEntry()��ʹ�ã�ע��ʱ���ϱ�֤��CallBackInfoAddStartһһ��Ӧ
	             ��ִ�лص�����֮�����
	�㷨ʵ��    :
	����˵��    :
		[I] dwTick �ص�����ִ����ɵ�ʱ��
	����ֵ˵��  :��
	-------------------------------------------------------------------------------
	�޸ļ�¼    :
	��  ��      �汾        �޸���        �޸�����
	2015/05/20  1.0         �˲���        �½�
	===============================================================================*/
    void CallBackInfoAddEnd(u32 dwTick);

#if defined(_LINUX_) && defined(PWLIB_SUPPORT)
    void Main();  // pwlib pure virtual function
#endif
};


//ʵ����ʱ����Ϣ
typedef  struct TInstTimerInfo
{
    TInstTimerInfo* next ;
    u32 timerId ;
    void* timerBlkAdrr ;
}TInstTimerInfo;


//ʵ��״̬�ı���ʷ��¼
#define  MAX_INST_STATE_RECORD_COUNT 10
typedef  struct tagTInstStateChangeInfo
{
    u32 dwIndex;
    u32 dwState;
}TInstStateChangeInfo;

//CInstance�������淶��
//����Osp��Ӧ�ñ���Ӹ�CInstance��������һ�������Instance�࣬
//������һ��InstanceEntry()��Ա�����ľ���ʵ��
class KD_API CInstance
{
public:
    enum
    {
        //����ʵ��
        PENDING,
        //�㲥
        EACH = 0xffff,
        //�㲥��Ҫ��ȷ��Ӧ��
        EACH_ACK = 0xfffe,
        //δʹ��
        CONN_ACK = 0xfffd,
        //�ػ�ʵ��
        DAEMON = 0xfffc,
        //Ŀ��ʵ��ʵ������Ч��������Ч
        INVALID = 0xfffb
    };

public:
    //Ӧ�ú�
    u16 m_appId;
    //ʵ����
    u16 m_instId;
    //ʵ������
    s8 m_alias[MAX_ALIAS_LEN];
    //ʵ����������
    u8 m_aliasLen;
    //ʵ��������󳤶�
    u8 m_maxAliasLen;
    //��ǰ״̬��
    u32 m_curState;
    //��һ��״̬��
    u32 m_lastState;

	//״̬�ı����ʷ��¼ ��¼�����10��
	u8 m_chInstStateIndex;//�ڻ��λ������е����
    u32 m_dwInstStateTimes;//״̬Ǩ�ƴ���
    //״̬�ı����ʷ��¼
    TInstStateChangeInfo m_atInstStateInfo[MAX_INST_STATE_RECORD_COUNT];
public:
    //�ػ�ʵ����ں���
    virtual void DaemonInstanceEntry(CMessage *const, CApp*) // CMessage *const pcMsg, CApp* pcApp
    {
        log(0, "Osp: message received in default daemon instance of app %d.\nCheck your daemon implementation, please!\n", GetAppID());
    }
    //ʵ����ں���
    virtual void InstanceEntry(CMessage *const pcMsg) = 0;
    //ʵ����ӡ����
    virtual void InstanceDump(u32 = 0) // u32 dwFlag = 0
    {
    }
    //�ػ�ʵ����ӡ����
    virtual void DaemonInstanceDump(u32 = 0) // u32 dwReserved = 0
    {
    }
    //ʵ���˳�
    virtual void InstanceExit()
    {
    }

    //�趨ʵ������
    s32 SetAlias(const char* szAlias, u8 byLen);
    //ɾ��ʵ������
    void DeleteAlias();
    //��ѯʵ������
    BOOL32 GetAlias(char * szAlias, u8 byInBufLen, u8* pbyAliasLen);
    //��ѯʵ����������
    u8 GetAliasLen();

    //��ѯ��һ��ʵ��״̬��
    u32 LastState();
    //��ѯ��ǰʵ��״̬��
    u32 CurState();

    //��ѯӦ�ú�
    u16 GetAppID();
    //��ѯʵ����
    u16 GetInsID();

    //��ʱ���ź���
    SEMHANDLE m_tSemTimerList;
    //��ʱ����Ϣ����
    TInstTimerInfo m_timerInfoListHead;

    //���붨ʱ����Ϣ
    void AddInstTimerInfo(u32 dwTimerNo, void* pvTimerAddr);
    //ɾ����ʱ����Ϣ
    void DelInstTimerInfo(u32 dwTimerNo);
    //��ѯ��ʱ����Ϣ
    void *FindInstTimerInfo(u32 dwTimerNo);
    //ɾ�����ж�ʱ����Ϣ
    void DelAllInstTimerInfo();

	//��ӡ״̬�ı�����¼
    void InstStateInfoShow(u16 wInstId);
protected:
    //������Զ�ʱ
    s32 SetTimer(u32 dwTimerNo, long dwMilliSeconds, u32 dwPara = 0);
    //���þ��Զ�ʱ
    s32 SetAbsTimer(u32 dwTimerNo, u16 wYear, u8 byMon, u8 byDay, u8 byHour, u8 byMin, u8 bySec, u32 dwPara = 0);
    //ȡ����ʱ
    s32 KillTimer(u32 nTimerNo);
    // ȡ�����Զ�ʱ��
    s32 KillAbsTimer(u32 nTimerNo);
    //ʵ����ӡ,�ɵ���OspSetLogLevel�޸Ĵ�ӡ����
    void log(u8 byLevel, const char * szFormat,...);
    //�л�״̬��
    void NextState(u32 dwState, char * szStateName = NULL);

    //�����첽��Ϣ(Ŀ��ʵ������ʵ���ű�ʶ)
    s32 post(u32 dwDstIID, u16 wEvent, const void* pvContent = 0, u16 wLength = 0, u32 dwDstNode = 0);
    //�����첽��Ϣ(Ŀ��ʵ������ʵ��������ʶ)
    s32 post(const char* szDstAlias, u8 byAliasLen, u16 wDstAppID, u16 wEvent,
        const void* pvContent = 0, u16 wLength = 0, u32 dwDstNode = 0);

    //����ͬ����Ϣ(Ŀ��ʵ������ʵ���ű�ʶ)
    s32 send(u32 dwDstIID, u16 wEvent, const void* pvContent = 0, u16 wLength = 0, u32 dwDstNode = 0,
        void* pvAckBuf = NULL, u16 wAckBufLen = 0, u16* pwRealAckLen = NULL,
        u16 wTimeout=1000);
    //����ͬ����Ϣ(Ŀ��ʵ������ʵ��������ʶ)
    s32 send(const char* szDstAlias, u8 byAliasLen, u16 wDstAppID, u16 wEvent,
        const void* pvContent=0, u16 wLength = 0, u32 dwDstNode = 0,
        void* pvAckBuf = NULL, u16 wAckBufLen = 0, u16* pwRealAckLen = NULL,
        u16 wTimeout=1000);

    //����ͬ����ϢӦ��
    s32 SetSyncAck(const void* pvAckBuf = NULL, u16 wAckBufLen = 0);
    //����ͬ����ϢӦ��(����ʹ��SetSyncAck)
    s32 reply(const void* pvAckBuf = NULL, u16 wAckBufLen = 0);
};

//���������û�App���ģ��
class CAppNoData
{
};
#endif //#ifdef __cplusplus

//�ϲ�Ӧ�õ���OSPSIP POST�ӿ���Ҫ��ҪЯ������ݱ�ʶ
//��ʵ�����OSP��OSPЭ���֮��
#ifdef __cplusplus

#define OSP_INVALID_IID     (0)          //��ЧIID
#define OSP_INVALID_TASKNO  (0)          //��Ч�����
#define OSP_INVALID_SEQ_NO  (0)          //��Ч���к�

struct TOspEntityId
{
public:
	u32 dwOspIID;    //appid,instid
	u32 dwTaskID;  //task id
	u32 dwSeqNO;  //seq no

	TOspEntityId()
	{
		dwOspIID = OSP_INVALID_IID;
		dwTaskID = OSP_INVALID_TASKNO;
		dwSeqNO = OSP_INVALID_SEQ_NO;
	}

	BOOL32 operator==(TOspEntityId& tOther) const
	{
        //ע�⣬���ﲻ�Ƚ�SeqNO
		return (tOther.dwOspIID == dwOspIID && tOther.dwTaskID == dwTaskID);
	}
};
#endif//__cplusplus

//ʵ���������ٲ��Ҽ�¼����
typedef struct TInstAliasInfo
{
    //ʵ����
    u16  instId;
    //ʵ������������ֵ(Ҳ�Ǵ�ŵ�λ���±�)
    u32  aliasRet;
    //��ͬ����ֵ����һ��ʵ�����λ��
    u32  nextLoc;
}TInstAliasInfo;

#ifdef __cplusplus
//Ӧ��ģ��(ģ�����Ϊʵ���ļ̳����Լ����ʵ��ʵ����)
template <class I, s32 maxins = 1, class A = CAppNoData, u8 maxAliasLen = 0>
class zTemplate: public CApp, public A
{
public:
    //����ʵ������
    BOOL32 SetInstAlias(u16 wInsID, const char* szAlias, u8 byLen);
    //���ʵ��������¼��Ϣ
    BOOL32 ClearInstAlias(u16 wInsID, const char* szAlias, u8 byLen);

private:
     //�ɾֲ�ʵ���Ų���ʵ��
    CInstance* GetInstance(u16 wInsID);
    //�ɱ�������ʵ��
    CInstance* FindInstByAlias(const char* szAlias, u8 byLen);
    //�����ͨʵ������
    s32 GetInstanceNumber();
    //�������������
    u8 GetMaxAliasLen();

private:
    //daemonʵ��
    I daemIns;
    //��ͨʵ����
    I insarray[maxins];

    //ʵ���������ٲ���
    //ʵ��������¼��Ϣ��ͷ��
    TInstAliasInfo instAliasArray[maxins];
    //ʵ��������¼��Ϣ���ñ���¼������ͬ��ʵ��
    TInstAliasInfo bakInstAliasArray[maxins];
    //��ǰ���ñ��м�¼��ʵ������
    u32 curBakArrayNum;

    //��ʼ��ʵ��������¼��Ϣ
    BOOL32 InitAliasArray();
    //ʵ������ת����WORD32������
    u32 AliasToWord(char * szAlias, u8 byLen);
    //ȷ��ʵ��������Ϣ��������ñ����ڱ��ñ���
    BOOL32 IsInBakArray(u32 dwAtoW);
};
#endif //__cplusplus

//ͨ�õ�LOG����
enum EOspLogLev
{
    OSP_NOLOG_LEV = 0,    //���κδ�ӡ
    OSP_ERROR_LEV,        //���󼶱�
    OSP_WARNING_LEV,      //���漶��
    OSP_CRITICAL_LEV,     //�ؼ�����
    OSP_EVENT_LEV,        //��ͨ�¼�����
    OSP_PROGRESS_LEV,     //���ȼ���
    OSP_FREQ_EVENT_LEV,   //Ƶ�����¼����� ����SIP�¼� OSP�¼���
    OSP_TIMER_LEV,        //��ʱ������
    OSP_TRIVIAL_LEV,      //����Ƶ���ļ���
    OSP_ALL_LEV,          //���м���
    OSP_LOG_LEV_NUM,
};

//��־������ģ�飬������־���
enum EOspLogModule
{
    MOD_OSP,               //osp
    MOD_OSPEXT,            //ospext
    MOD_OSPPROT,           //ospprot
    MOD_OSPSIP,            //ospsip
    MOD_COMMON_NUM = 20,  //20������ģ���㹻

    USER_MOD_START = 21, //�ϲ�ģ���ɴ˿�ʼ

    MOD_MAX = 255,  //��������255��ģ����־���
};

//��־�ļ�������
enum EOspLogFileType
{
    OSP_LOG_FILE_NONE = 0,      //�Ƿ�����
    OSP_LOG_FILE_ERR = 1,       //������־
    OSP_LOG_FILE_RUN = 1<<1,    //������־
};

#ifdef __cplusplus
//�����ķ�װ
class KD_API COspSemLock
{
public:
    COspSemLock();
    ~COspSemLock();

private:
    COspSemLock(const COspSemLock&);
    void operator=(const COspSemLock&);

public:
    //����
    BOOL32 Lock(u32 dwTimeout = INFINITE);

    //����
    BOOL32 UnLock();

    //��ͬ��Lock(), ������ʹ��ϰ��
    BOOL32 Take(u32 dwTimeout = INFINITE);

    //��ͬ��UnLock(), ������ʹ��ϰ��
    BOOL32 Give();

private:
    SEMHANDLE m_hSemaphore;
};

//�Զ������򻯼�������������
class KD_API COspAutoLock
{
public:
    //���캯������
    COspAutoLock(COspSemLock& rLock);

    //������������
    ~COspAutoLock();
private:
	COspAutoLock& operator=(const COspAutoLock&);
private:
    COspSemLock& m_Lock;
};

//log�Ƿ�֧�����������Ϣ
KD_API_C BOOL32 IsOspPrintCI();
//���ڲ�֧��__FUNCTION__�ı�����(vc6��) ��Ϊ��""
#if defined(_MSC_VER) && !defined(__FUNCTION__)
#define __FUNCTION__ ""
#endif

#define  OSP_FILE_NAME  (IsOspPrintCI() ? __FILE__ : (const s8 *)NULL)

#define  OSP_FILE_LINE  (IsOspPrintCI() ? __LINE__ : -1)

#define  OSP_TYPE_NAME  (IsOspPrintCI() ? (const s8 *)NULL : (const s8 *)NULL)

#define  OSP_FUNC_NAME  (IsOspPrintCI() ? __FUNCTION__ : (const s8 *)NULL)

//���������Ϣ(file-line-class-function)��LOG
class KD_API COspXLog
{
public:
	//��־�ӿ��� ʵ���û�����־���� ����������Ϣ(file-line-class-function)��
    COspXLog(const s8* szFileName=NULL, s32 nFileLine=-1, const s8* szClassName=NULL, const s8* szFunName=NULL);
	~COspXLog();
    //����ģ����ƵĴ�ӡ
    void operator()(u8 byLogLev, const s8* szFormat, ...) const;
    void operator()(u8 byLogMod, u8 byLogLev, const s8* szFormat, ...) const;

protected:
    u32 GetCompileInfo(u32 dwBufferLen, s8* pchBuffer) const;
    static u32 GetFileNameFromPath(const s8* szPath, u32 dwLength, s8* pchBuffer);
    static u32 GetTypeName(const s8* szTypeNameRaw, u32 dwLength,  s8* pchBuffer);

private:
    const s8* m_szFileName;
    u32 m_nFileLine;
    const s8* m_szClassName;
    const s8* m_szFunName;
};

/*=============================================================================
 �� �� ��  : OSP_CLASSLOG
 ��������  : ȫ�ֵ���־��¼�ӿڣ�������ʹ��
             ���������ֵ��÷���
             OSP_CLASSLOG(u8 byLogLev, const s8* szFormat, ...)
             OSP_CLASSLOG(u8 byLogMod, u8 byLogLev, const s8* szFormat, ...)
 �㷨ʵ��  :
 ����˵��  :
            [I]u8 byMod     ��־ģ��ö��ֵ
            [I]u8 byLevel   ��־�����ü���
            [I]const s8* szFormat, ... ��־����
 ����ֵ˵��: ��
-------------------------------------------------------------------------------
 �޸ļ�¼  :
 ��  ��            �汾    �޸���    �޸�����
 1. 2015��7��6��    1.0    dengchange    �����ɺ���
=============================================================================*/
#define OSP_CLASSLOG (COspXLog(OSP_FILE_NAME, OSP_FILE_LINE,\
                               OSP_TYPE_NAME, OSP_FUNC_NAME))

/*=============================================================================
 �� �� ��  : OSP_LOG
 ��������  : ȫ�ֵ���־��¼�ӿڣ�ȫ��ʹ�û���ľ�̬��Ա������ʹ�ã�
             ���������ֵ��÷���
             OSP_LOG(u8 byLogLev, const s8* szFormat, ...)
             OSP_LOG(u8 byLogMod, u8 byLogLev, const s8* szFormat, ...)
 �㷨ʵ��  :
 ����˵��  :
            [I]u8 byMod ��־ģ��ö��ֵ
            [I]u8 byLevel ��־�����ü���
            [I]const s8* szFormat, ... ��־����
 ����ֵ˵��: ��
-------------------------------------------------------------------------------
 �޸ļ�¼  :
 ��  ��            �汾    �޸���    �޸�����
 1. 2015��7��6��    1.0    dengchange    �����ɺ���
=============================================================================*/
#define OSP_LOG (COspXLog(OSP_FILE_NAME, OSP_FILE_LINE, NULL, OSP_FUNC_NAME))

/*=============================================================================
 �� �� ��  : OspSetModuleLogLev
 ��������  : ����ģ�����־�����ģ������
 �㷨ʵ��  :
 ����˵��  :
            [I]u8 byMod ��־ģ��ö��ֵ  OSP���е���־ģ��enum EOspLogModule,
               �û�������Ҫ���ж���ö��ֵ��ע�ⲻҪ��OSP���е���־ģ���ͻ
            [I]u8 byLevel ��־�����ü��� ��־����С�ڵ������ü��𣬲Ż�д����־�ļ�
            [I]const char* szModName ģ������

 ����ֵ˵��: TRUE �ɹ� FALSE ʧ��
-------------------------------------------------------------------------------
 �޸ļ�¼  :
 ��  ��            �汾    �޸���    �޸�����
 1. 2015��7��6��    1.0    dengchange    �����ɺ���
=============================================================================*/
KD_API_C u32 OspSetModuleLogLev(u8 byMod, u8 byLevel, const char* szModName);

/*=============================================================================
 �� �� ��  : OspGetModuleLogLevel
 ��������  : ͨ����־ģ����Ż�ȡ��ģ�����־����
 �㷨ʵ��  :
 ����˵��  :
            [I]u8 byMod     ��־ģ��ö��ֵ
            [I]const char* szModName ģ�������

 ����ֵ˵��: ��־�����ü��� ���û�����ù� ��ȡ����ֵ����TRIVIAL_LEV
-------------------------------------------------------------------------------
 �޸ļ�¼  :
 ��  ��            �汾    �޸���    �޸�����
 1. 2015��7��6��    1.0    dengchange    �����ɺ���
=============================================================================*/
KD_API_C u32 OspGetModuleLogLevel(u8 byMod);

/*=============================================================================
 �� �� ��  : OspGetLogStrModule
 ��������  : ͨ����־ģ��Ż�ȡ��ģ�����������
 �㷨ʵ��  :
 ����˵��  :
            [I]u8 byMod ��־ģ��ö��ֵ
            [I]const char* szModName ģ������

 ����ֵ˵��: ģ����������� ���û�����ù� ��ȡ����ֵ����"null"
-------------------------------------------------------------------------------
 �޸ļ�¼  :
 ��  ��            �汾    �޸���    �޸�����
 1. 2015��7��6��    1.0    dengchange    �����ɺ���
=============================================================================*/
KD_API_C const char* OspGetLogStrModule(u8 byMod);

/*=============================================================================
 �� �� ��  : OspGetStrLogLevel
 ��������  : ͨ����־�����ȡ�ַ�����
 �㷨ʵ��  :
 ����˵��  :
            [I]u8 byLogLev ��־�����ü���

 ����ֵ˵��: ��־�����ַ����� ���û�����ù� ��ȡ����ֵ����"null"
-------------------------------------------------------------------------------
 �޸ļ�¼  :
 ��  ��            �汾    �޸���    �޸�����
 1. 2015��7��6��    1.0    dengchange    �����ɺ���
=============================================================================*/
KD_API_C const char* OspGetStrLogLevel(u8 byLogLev);

/*��־��ȫ�ִ�ӡ���� levelֵС�ڵ��ڸ�ֵ����־��������Ļ�����
  Ĭ�ϼ���ΪOSP_ERROR_LEV
  ע��: ǰ����OspResumeScrnLog()���ù�����������Ļ�����
*/
KD_API_C void OspSetGlbLogPrintLevel(u8 byLogLev);

/*������־��ʱ����Ϣ��ӡ 0:����ӡʱ��; 1:��ӡ�뼶ʱ��; 255:��ӡ���뼶ʱ��
  Ĭ��Ϊ��ӡ�뼶ʱ��
*/
KD_API_C void OspSetLogTimeLevel(u8 byLogLev);

/*�����Ƿ��ӡ������Ϣ(file-line-class-function) 0:����ӡ������Ϣ; 1:��ӡ������Ϣ
  Ĭ�ϲ���ӡ
*/
KD_API_C void OspSetLogCompileInfo(u8 byPrint);

/*������־���Ƿ��ӡǰ׺��Ϣ(app-inst-task-state) 0:����ӡOSPǰ׺; 1:��ӡOSPǰ׺
  Ĭ�ϲ���ӡ
*/
KD_API_C void OspSetLogPrefix(u8 byPrint);

//�����Ƿ����������־�ļ��Լ�������־�ļ���
//0:�����������־; ��0: ��־����ֵС�ڵ��ڸ�ֵ�ģ����Ϊ������־
KD_API_C void OspSetWriteRunLog(u8 byIsWriteLog);

//�����Ƿ����������־�ļ���//0:�����; ��0:���
//�����������ּ������־: ERROR_LEV //1���󼶱�  OSP_WARNING_LEV //2���漶��
KD_API_C void OspSetWriteErrLog(u8 byIsWriteLog);


#endif //end __cplusplus

/*=============================================================================
�� �� ����OspLog
��      �ܣ�ȫ��log��������������Ŀ�����Ӧ�ú�0������OspSetLogLevel(0, xx)�Ϳ���
���Ƹú����Ĵ򿪻�ر�
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����u8 byLevel : [in] log level
          char * szFormat : [in] message format
�� �� ֵ��void
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
KD_API_C void OspLog(u8 byLevel, const char* szFormat, ...);

/*=============================================================================
�� �� ����OspMsgDumpSet
��      �ܣ�set long msg dump detail can/not be whole print, default is printf
10lines
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����BOOL32 bMsgDumpEnbl : [in] enable or not
�� �� ֵ��void
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
KD_API_C void OspMsgDumpSet(BOOL32 bLongMsgDumpEnbl);

/*=============================================================================
�� �� ����OspStatusMsgOutSet
��      �ܣ�set status message can or not be out put every timer
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����BOOL32 bOutMsgEnable : [in] enable or not
�� �� ֵ��void
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
KD_API_C void OspStatusMsgOutSet(BOOL32 bOutMsgEnable);

/*====================================================================
��������OspPrintf
���ܣ�����Ӧ��������ʾ����Ļ,�洢���ļ�,��������
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����
bScreen: �Ƿ��������Ļ,
bFile: �Ƿ�������ļ�,
szFormat: ��ʽ,
����ֵ˵����
====================================================================*/
KD_API_C void OspPrintf(BOOL32 bScreen, BOOL32 bFile, const char* szFormat,...);


/*====================================================================
��������OspTelAuthor
���ܣ�����Telnet����Ȩ�û���������(vxworks���û���������Ϊ�ջ�����ʧ��)
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����
����ֵ˵����
====================================================================*/
#ifdef __cplusplus
KD_API_C void OspTelAuthor(const char* szUsername = NULL, const char* szPassword = NULL);
#else
KD_API_C void OspTelAuthor(const char* szUsername, const char* szPassword);
#endif
/*=============================================================================
�� �� ����OspVerPrintf, OspVer
��      �ܣ�output compile version info to screen
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����
�� �� ֵ��void
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
2010/03/10  V1R4B3 ��  ��  �汾��Ϣ�����������־�ļ�
=============================================================================*/
#define  OspVerPrintf() \
OspPrintf(TRUE, FALSE, "Osp version: %s  compile time: %s %s\n", OSPVERSION, __DATE__, __TIME__)
KD_API_C void ospver();

/*=============================================================================
�� �� ����OspCat
��      �ܣ�output file content to screen
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����const char*  szFileName : [in] file to be opened
�� �� ֵ��void
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
KD_API_C void OspCat(const char* szFileName);

#ifdef _LINUX_
typedef void (*POspQuitFunc)(s32);
/*====================================================================
  ��������OspRegQuitFunc
  ���ܣ�ע�������˳���������linux����Ч
  �㷨ʵ�֣�
  ����ȫ�ֱ�����
  �������˵����
      pfQuitFunc    - �����˳�����
  ����ֵ˵����TRUE - ע��ɹ�
  ====================================================================*/
KD_API_C BOOL32 OspRegQuitFunc(POspQuitFunc pfQuitFunc);

/*====================================================================
  ��������OspRegTaskInfo
  ���ܣ�ע��������Ϣ����linux����Ч
  �㷨ʵ�֣�
  ����ȫ�ֱ�����
  �������˵����
      dwTaskId    - �����
        szName    - �������
  ����ֵ˵������
  ====================================================================*/
KD_API_C void OspRegTaskInfo(TASKID dwTaskId, const char* szName);

/*====================================================================
  ��������OspUnRegTaskInfo
  ���ܣ���ע��������Ϣ
  �㷨ʵ�֣�
  ����ȫ�ֱ�����
  �������˵����
      dwTaskId    - �����
  ����ֵ˵������
  ====================================================================*/
KD_API_C BOOL32 OspUnRegTaskInfo(TASKID dwTaskId);

/*====================================================================
  ��������OspTaskShow
  ���ܣ���ӡ������Ϣ����linux����Ч
  �㷨ʵ�֣�
  ����ȫ�ֱ�����
  �������˵����
  ����ֵ˵������
  ====================================================================*/
KD_API_C void OspTaskShow();

/*====================================================================
  ��������OspRegCommand
  ���ܣ�ע�������Telnet��ִ�еĺ���(�ú�������linux����Ч��windows�²���ע��)
  �㷨ʵ�֣�
  ����ȫ�ֱ�����
  �������˵����
      szName    - Telnet�����������
      pvFunc    - ��Ӧ�ĺ���ָ��
      szUsage    - ����İ�����Ϣ
  ����ֵ˵������
  ====================================================================*/
KD_API_C void OspRegCommand(const char* szName, void* pvFunc, const char* szUsage);

/*====================================================================
  ��������OspRegCommandEx
  ���ܣ�ע�������Telnet��ִ�е��ⲿ����
  �㷨ʵ�֣�
  ����ȫ�ֱ�����
  �������˵����
      szName    - Telnet�����������
    pfFunc    - ��Ӧ�ĺ���ָ��
    szUsage    - ����İ�����Ϣ
    szArgFormat - ע�ắ����������(s:�ַ��� i:���� c: �ַ� ����telnet ���е�ʱ�򱨴�)
                  ����:func��������������Ϊ���͡��ַ����ַ���,��szArgFormatΪ"ics"
  ����ֵ˵������
  ====================================================================*/
KD_API_C void OspRegCommandEx(const char* szName, void* pvFunc, const char* szUsage,const char* szArgFormat);

#endif

/*=============================================================================
�� �� ����OspNodeConnTest
��      �ܣ�test a node's network connection
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����u32 dwNodeID : [in] id of the node
�� �� ֵ��void
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
KD_API_C void OspNodeConnTest(u32 dwNodeID);

/*=============================================================================
�� �� ����OspNodeIpGet
��      �ܣ����ָ������Ip��ַ
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����dwNodeID : [in] node id

 �� �� ֵ���ɹ����ؽ��IP, ʧ�ܷ���0.
=============================================================================*/
KD_API_C u32 OspNodeIpGet(u32 dwNodeID);

/*=============================================================================
  �� �� ����OspNodeLocalIpGet
  ��    �ܣ���ȡ�ڵ�ı��ص�ַ
  ע    �⣺�����Ѿ����ӵ�tcp�ڵ㣬�ڱ��ش��ڶ����ַ������£���Ҫ֪���Է�ʵ�����ӵı���ip��ַ��
  �㷨ʵ�֣�
  ȫ�ֱ�����
  ��    ����dwNodeID : [in] node id

  �� �� ֵ���ɹ����ؽ��IP, ʧ�ܷ���0.
  =============================================================================*/
KD_API_C u32 OspNodeLocalIpGet(u32 dwNodeID);

/*====================================================================
�������� OspInstShow
���ܣ���ʾĳ��App�е�Instance��״̬��Ϣ
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
API void OspInstShow(u16 wAppID);

/*=============================================================================
�� �� ����OspInstShowAll
��      �ܣ���ʾ����Instance��״̬��Ϣ
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����
�� �� ֵ��void
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
API void OspInstShowAll();

/*=============================================================================
�� �� ����OspInstDump
��      �ܣ���ʾĳһinstance���Զ�����Ϣ�����ø�instance��dump������
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����wAppID : [in] app id
InstId : [in] instance id, 0:��ʾ���еģ�-1:��ʾ��IDLE��
param : [in] reserved parameter
�� �� ֵ��
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
KD_API_C void OspInstDump(u16 wAppID, u16 wInsID, u32 dwReserved);

/*====================================================================
��������OspNodeShow
���ܣ���ʾ����Node��״̬��Ϣ
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
API void OspNodeShow();

/*=============================================================================
�� �� ����OspAppShow
��      �ܣ���ʾApp��״̬��Ϣ
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����
�� �� ֵ��void
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
API void OspAppShow();

/*=============================================================================
�� �� ����OspDispatchShow
��      �ܣ���ʾDispatch task����Ϣ
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����
�� �� ֵ��void
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
KD_API_C void OspDispatchShow();

/*====================================================================
��������OspTimerShow
���ܣ���ʾtimer״̬��Ϣ
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
API void OspTimerShow();

/*====================================================================
��������OspLogShow
���ܣ���ʾ��־ģ��״̬
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ���:
�������˵����
����ֵ˵��: ��
====================================================================*/
API void OspLogShow();

/*====================================================================
��������OspMemShow
���ܣ�    ��ʾ�ڴ�����ջ����Ϣ����Ŀ
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
API void OspMemShow();

/*=============================================================================
�� �� ����OspAppEchoTest
��      �ܣ�Application echo testing
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����u16 AppId : [in] Application id
�� �� ֵ��void
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
KD_API_C void OspAppEchoTest(u16 wAppId);

/*=============================================================================
�� �� ����OspAddEventDesc
��      �ܣ����ڽ��¼��������Ǽǵ���Ϣ����ϵͳ
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����const char* desc : [in]
u16 event : [in]
�� �� ֵ��
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
KD_API_C void OspAddEventDesc(const char* szDesc, u16 wEvent);

/*=============================================================================
�� �� ����OspSendTrcOn
��      �ܣ���OSP��㷢�͸��ٱ�ʶ
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����
�� �� ֵ��void
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
API void OspSendTrcOn();

/*=============================================================================
�� �� ����OspSendTrcOff
��      �ܣ��ر�OSP��㷢�͸��ٱ�ʶ
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����
�� �� ֵ��void
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
API void OspSendTrcOff();

/*=============================================================================
�� �� ����OspRcvTrcOn
��      �ܣ���OSP�����ո��ٱ�ʶ
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����
�� �� ֵ��void
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
API void OspRcvTrcOn();

/*=============================================================================
�� �� ����OspRcvTrcOff
��      �ܣ��ر�OSP�����ո��ٱ�ʶ
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����
�� �� ֵ��void
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
API void OspRcvTrcOff();

/*====================================================================
��������OspTrcAllOn
���ܣ���OSP����Ӧ�õĸ��ٱ���
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
API void OspTrcAllOn();

/*====================================================================
��������OspTrcAllOn
���ܣ���OSP����Ӧ�õĸ��ٱ���
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
API void OspTrcAllOff();

/*=============================================================================
 �� �� ��  : OspOpenLogFile
 ��������  : ������־�ļ� ��������־�ļ��Ĳ���
             ���øýӿں󣬻�������־�ļ���¼
 �㷨ʵ��  :
 ����˵��  :
            [I]const char* szDir 	   ��־�ļ������Ŀ¼
            [I]u32 dwMaxSizeKB     ÿ���ļ�������ֽ���
            [I]dwLogNumMax         ��־�ļ���������
 ����ֵ˵��: TRUE �ɹ� FALSE ʧ��
-------------------------------------------------------------------------------
 �޸ļ�¼  :
 ��  ��            �汾    �޸���    �޸�����
 1. 2015��7��6��    1.0    dengchange    �޸�
    ԭ�е�֧��������־�ļ�Ŀ¼���ļ�������Ϊ����֧�������ļ�Ŀ¼
    ��־�ļ�����osp�Զ����ɣ�ȡ�ļ����ɵ�ʱ����Ϊ�ļ���
=============================================================================*/
KD_API_C BOOL32 OspOpenLogFile(const char* szDir, u32 dwMaxSizeKB, u32 dwMaxFiles);

/*=============================================================================
 �� �� ��  : OspOpenLogFileEx
 ��������  : ������־�ļ� ��������־�ļ��Ĳ���
             ���øýӿں󣬻�������־�ļ���¼
 �㷨ʵ��  :
 ����˵��  :
 			[I]const char* szFileName  ��־�ļ����ֵ�ǰ׺
            [I]const char* szDir 	   ��־�ļ������Ŀ¼
            [I]u32 dwLogSizeMax_kb ÿ���ļ�������ֽ���
            [I]dwLogNumMax         ��־�ļ���������
 ����ֵ˵��: TRUE �ɹ� FALSE ʧ��
-------------------------------------------------------------------------------
 �޸ļ�¼  :
 ��  ��            �汾    �޸���    �޸�����
 1. 2015��7��6��    1.0    dengchange    �޸�
=============================================================================*/
KD_API_C BOOL32 OspOpenLogFileEx(const char* szFileName, const char* szPath,
                            u32 dwMaxSizeKB, u32 dwMaxFiles);

/*=============================================================================
�� �� ����OspCloseLogFile
��      �ܣ��ر���־�ļ���
ע      �⣺�������OspQuit������Ҫ���øú�����
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����
�� �� ֵ��void
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
KD_API_C void OspCloseLogFile();

/*=============================================================================
�� �� ����OspSetLogLevel
��      �ܣ�����һ��APP��CInstance::log�����ļ���
ע      �⣺������OspInit֮����øú���������Ч��OspInit������Ӧ�õĸñ�־��0
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����aid : [in] app id
file_level : [in] file level
screen_level : [in] screen level
if level=5, ��ô0~5 ��ӡ,  6~255 ����ӡ,����Ϊ3,��ֻ��log(0|1|2,"")
�ĵ����ܹ������
�� �� ֵ��
=============================================================================*/
KD_API_C void OspSetLogLevel(u16 wAppID, u8 byFileLevel, u8 byScreenLevel);

/*====================================================================
��������OspSetFileLogLevel
���ܣ�����App��ʹ��OspLog()/Instance::log()ʱ����־�ļ��ȼ�
      ��־����С�ڵ������ü��𣬲Ż��¼����־�ļ�
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����wAid App�ĵȼ�
byFileLevel: �ļ�Log�ĵȼ�
����ֵ˵����
====================================================================*/
KD_API_C void OspSetFileLogLevel(u16 wAppID, u8 byFileLevel);

/*====================================================================
��������OspSetScrnLogLevel
���ܣ�����App��ʹ��OspLog()/Instance::log()ʱ����־�ļ��ȼ�
      ��־����С�ڵ������ü��𣬲Ż�����Ļ���
      ע��: �����OspResumeScrnLog()�� ���������־
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����
uAid App�ĵȼ�
uScrnLevel: ��ĻLog�ĵȼ�
����ֵ˵����
====================================================================*/
KD_API_C void OspSetScrnLogLevel(u16 wAppID, u8 byScrnLevel);

/*=============================================================================
 �� �� ��  : OspSetTrcFlag
 ��������  : ������Ϣ���ٿ���
 �㷨ʵ��  : wFileFlag/wScrnFlag��Ϊ
                 1 ����״̬��
                 2 �շ���Ϣ
                 4 ��ʱ��
                 7 ��������
 ����˵��  :
            [I]u16 wAppID    AppIdΪ0   ����ȫ��(��App�޹�)�ĸ���
                             AppId��Ϊ0 ���ö�ӦApp�ĸ���
            [I]u16 wFileFlag ���ٽ�����浽��־�ļ���־
            [I]u16 wScrnFlag ���ٽ������Ļ����ʾ��־
 ����ֵ˵��: ��
-------------------------------------------------------------------------------
 �޸ļ�¼  :
 ��  ��            �汾    �޸���    �޸�����
 1. 2002/05/23     1.0
 2. 2015��6��29��  2.0    dengchange    �޸�ע��
=============================================================================*/
KD_API_C void OspSetTrcFlag(u16 wAppID, u16 wFileFlag, u16 wScrnFlag);

/*=============================================================================
 �� �� ��  : OspSetFileTrcFlag
 ��������  : ������Ϣ���ٿ���
 �㷨ʵ��  : wFileFlag/wScrnFlag��Ϊ
                 1 ����״̬��
                 2 �շ���Ϣ
                 4 ��ʱ��
                 7 ��������
 ����˵��  :
            [I]u16 wAppID    AppIdΪ0   ����ȫ��(��App�޹�)�ĸ���
                             AppId��Ϊ0 ���ö�ӦApp�ĸ���
            [I]u16 wFileFlag ���ٽ�����浽��־�ļ���־
 ����ֵ˵��: ��
-------------------------------------------------------------------------------
 �޸ļ�¼  :
 ��  ��            �汾    �޸���    �޸�����
 1. 2002/05/23     1.0
 2. 2015��6��29��  2.0    dengchange    �޸�ע��
=============================================================================*/
KD_API_C void OspSetFileTrcFlag(u16 wAppID, u16 wFileFlag);

/*=============================================================================
 �� �� ��  : OspSetScrnTrcFlag
 ��������  : ������Ϣ���ٿ���
 �㷨ʵ��  : wFileFlag/wScrnFlag��ֵ��Ӧ:
                 1 ����״̬��
                 2 �շ���Ϣ
                 4 ��ʱ��
                 7 ��������
 ����˵��  :
            [I]u16 wAppID    AppIdΪ0   ����ȫ��(��App�޹�)�ĸ���
                             AppId��Ϊ0 ���ö�ӦApp�ĸ���
            [I]u16 wScrnFlag ���ٽ������Ļ����ʾ��־
 ����ֵ˵��: ��
-------------------------------------------------------------------------------
 �޸ļ�¼  :
 ��  ��            �汾    �޸���    �޸�����
 1. 2002/05/23     1.0
 2. 2015��6��29��  2.0    dengchange    �޸�ע��
=============================================================================*/
KD_API_C void OspSetScrnTrcFlag(u16 wAppID, u16 wScreenFlag);

/*=============================================================================
�� �� ����OspRegistModule
��      �ܣ���OSP�Ǽ�һ��ģ��(��windows����Ч)
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����(in)pchModuleName - ģ�飨.exe�ļ���������NULL��β���ַ�����
��"kdvmt.dll"��
�� �� ֵ���ɹ�����TRUE��ʧ�ܷ���FALSE
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
KD_API_C BOOL32 OspRegistModule(const char* szModuleName);

/*=============================================================================
�� �� ����OspUnRegistModule
��      �ܣ���OSPע��һ���ѵǼǵ�ģ��(��windows����Ч����OspRegistModule֮���Ҵ���ͬһ�μ����в���Ч)
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����(in)pchModuleName - ģ�飨.exe�ļ���������NULL��β���ַ�����
��"kdvmt.dll"��
�� �� ֵ���ɹ�����TRUE��ʧ�ܷ���FALSE
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2016/07/08    1.0
=============================================================================*/
KD_API_C BOOL32 OspUnRegistModule(const char* szModuleName);

/*=============================================================================
�� �� ����OspSetLogEventDataLength
��      �ܣ�����ȫ�ֵ���Ϣ������ʾ�ĳ��ȡ�
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����u16 wLength : [in] length of log event data
�� �� ֵ��u16 previous length
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
KD_API_C u16 OspSetLogEventDataLength(u16 wLength);

/*=============================================================================
�� �� ����OspEnableBroadcastAck
��      �ܣ����������£��û����͹㲥��Ϣ������Ҫ�Է�����ȷ����Ϣ��ȱʡ����£�
PIS������Ϣ�ķ����߷���OSP_BROADCASTACK��Ϣ�����ǿ���ͨ���ú����޸���
��ѡ��Ƿ���OSP_BROADCASTACK���ɽ��ܽڵ�����ġ�
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����u16 aid : [in] ��ʾ�㲥��Ϣ�Ľ�����AID��
BOOL32 bEnable : [in] enable or not
�� �� ֵ��BOOL32 - true Succeeded, false Failed
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
KD_API_C BOOL32 OspEnableBroadcastAck(u16 wAppID, BOOL32 bEnable);

/*=============================================================================
�� �� ����OspGetNodeAddr
��      �ܣ�����Osp����ַ��������Զ��IP+Port����
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����u32 dwNodeID : [in] ���ID
                    TOspNodeAddr* ptOspNodeAddr : [out] ����ַ
�� �� ֵ��FALSE - ��ѯ�ɹ�
                    TRUE - ��ѯʧ��
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2006/08/10    4.0
=============================================================================*/
typedef struct
{
    u32 m_dwLocalIP;//������
    u16 m_wLocalPort;//������
    u32 m_dwPeerIP;//������
    u16 m_wPeerPort;//������
}TOspNodeAddr;
KD_API_C BOOL32 OspGetNodeAddr(u32 dwNodeID, TOspNodeAddr* ptOspNodeAddr);

#if defined(_MSC_VER) || defined(_LINUX_)

//sock5����汾��
#define SOCK5_PROXY_VERSION                   (u8)0x05
//�ͻ���֧�ּ�Ȩ����
#define SOCK5_PROXY_AUTHEN_NO_REQUIERD        (u8)0x00
#define SOCK5_PROXY_AUTHEN_USERNAME_PASSWORD  (u8)0x02
//�������
#define SOCK5_PROXY_SUCCESS                   (u8)0x00
#define SOCK5_PROXY_AUTHEN_NO_ACCEPTABLE      (u8)0xff
//��������
#define SOCK5_PROXY_CMD_TCP_CONNECT           (u8)0x01
#define SOCK5_PROXY_CMD_TCP_BIND              (u8)0x02
#define SOCK5_PROXY_CMD_UDP_ASSOCIATE         (u8)0x03
//�����ֶ�
#define SOCK5_PROXY_RESERVED_DATA             (u8)0x00
//��ַ����
#define SOCK5_PROXY_IPV4_ADDR                 (u8)0x01
#define SOCK5_PROXY_DOMAIN_NAME               (u8)0x03
#define SOCK5_PROXY_IPV6_ADDR                 (u8)0x04


#define MAX_SOCK5PROXY_AUTHEN_NUM             (u8)0xff
#define MAX_SOCK5PROXY_NAME_PASS_LENGTH       (u8)64
typedef struct
{
    u32 m_dwProxyIP;
    u16 m_wProxyPort;
    u8 m_byAuthenNum;
    u8 m_abyAuthenMethod[MAX_SOCK5PROXY_AUTHEN_NUM];
    s8 m_achUseName[MAX_SOCK5PROXY_NAME_PASS_LENGTH+1];
    s8 m_achPassword[MAX_SOCK5PROXY_NAME_PASS_LENGTH+1];
}TOspSock5Proxy;

/*=============================================================================
�� �� ����OspConnectTcpNodeThroughSock5Proxy
��      �ܣ�TCP��Խsock5�������ӷ���ˣ���OspConnectTcpNode������ͬ���ϲ㲻��Ҫ����OspConnectToSock5Proxy���������
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����ptOspSock5Proxy : [in] �����������Ϣ�ṹ;
          dwServerIP : [in] ������IP
          wServerPort : [in] �������˿�
          wHb: [in] �����������(��)
          byHbNum: [in] byHbNum��δ�����Ӽ��Ӧ�����Ϊ��·�ѶϿ�
          dwTimeoutMs : [in] ������ʱʱ��
          pdwLocalIP: [in, out] ��TCP����ʹ�õı���IP
�� �� ֵ��ʧ�ܷ���INVALID_NODE��
          �ɹ�����һ����̬����Ľ���, �˺��û��ɽ���������ͨ��
          �ϲ��������������OspDisconnectTcpNode���������޴���ʱ��������
-------------------------------------------------------------------------------
 �޸ļ�¼��
 ��      ��  �汾  �޸���  �޸�����
 2006/08/21  4.0   ��С��
=============================================================================*/
#ifdef __cplusplus
KD_API_C s32 OspConnectTcpNodeThroughSock5Proxy(TOspSock5Proxy* ptOspSock5Proxy, u32 dwServerIP, u16 wServerPort,
                                           u16 wHb = 10, u8 byHbNum = 3, u32 dwTimeoutMs = 0,
                                           u32* pdwLocalIP = NULL, u8 bySocksAuthVerion = SOCK5_PROXY_VERSION);
#else
KD_API_C s32 OspConnectTcpNodeThroughSock5Proxy(TOspSock5Proxy* ptOspSock5Proxy, u32 dwServerIP, u16 wServerPort,
                                           u16 wHb , u8 byHbNum , u32 dwTimeoutMs,
                                           u32* pdwLocalIP , u8 bySocksAuthVerion);
#endif

/*=============================================================================
�� �� ����OspConnectToSock5Proxy
��      �ܣ���sock5�������������TCP��·��UDP��Խsock5��������Ƚ���һ��TCP��·��
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����ptOspSock5Proxy : [in] �����������Ϣ�ṹ
          dwTimeoutMs : [in] ������ʱʱ��
�� �� ֵ��ʧ�ܷ���INVALID_SOCKET��
          �ɹ����������ͨ�ŵ�TCP Socket���ɽ�һ������OspUdpAssociateThroughSock5Proxy����UDP Associate��
          �ɸ��ã���Ҫ�ϲ�ά����TCP���ӣ���·����Чʱ��Udp AssociateҲӦ��Ϊ��Ч��
          �������������OspDisconnectFromSock5Proxy��
-------------------------------------------------------------------------------
 �޸ļ�¼��
 ��      ��  �汾  �޸���  �޸�����
 2006/08/21  4.0   ��С��
=============================================================================*/
#ifdef __cplusplus
KD_API_C SOCKHANDLE OspConnectToSock5Proxy(TOspSock5Proxy* ptOspSock5Proxy, u32 dwTimeoutMs = 0, u8 bySocksAuthVerion = SOCK5_PROXY_VERSION);
#else
KD_API_C SOCKHANDLE OspConnectToSock5Proxy(TOspSock5Proxy* ptOspSock5Proxy, u32 dwTimeoutMs, u8 bySocksAuthVerion );
#endif
/*=============================================================================
�� �� ����OspUdpAssociateThroughSock5Proxy
��      �ܣ�UDP��Խsock5����
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����hSocket : [in] OspConnectToSock5Proxy���ص�socket(�ɸ���);
          dwLocalIP : [in] �����շ�socket IP���Ա����������������ݴ�Խ��������
          wLocaPort : [in] �����շ�socket �˿ڣ��Ա����������������ݴ�Խ��������
          pdwProxyMapIP : [out] ���������ӳ��IP��������
          pwProxyMapPort : [out] ���������ӳ��˿ڣ�������
          dwTimeoutMs : [in] ������ʱʱ��
�� �� ֵ��ʧ�ܷ���FALSE��
          �ɹ�����TRUE
-------------------------------------------------------------------------------
 �޸ļ�¼��
 ��      ��  �汾  �޸���  �޸�����
 2006/08/21  4.0   ��С��
=============================================================================*/
#ifdef __cplusplus
KD_API_C BOOL32 OspUdpAssociateThroughSock5Proxy(SOCKHANDLE hSocket, u32 dwLocalIP, u16 wLocalPort,
                                            u32* pdwProxyMapIP, u16* pwProxyMapPort, u32 dwTimeoutMs = 0);
#else
KD_API_C BOOL32 OspUdpAssociateThroughSock5Proxy(SOCKHANDLE hSocket, u32 dwLocalIP, u16 wLocalPort,
                                            u32* pdwProxyMapIP, u16* pwProxyMapPort, u32 dwTimeoutMs);
#endif

/*=============================================================================
�� �� ����OspDisConnectFromSock5Proxy
��      �ܣ��Ͽ���sock5������������UDP Associate��TCP����
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����hSocket : [in] OspConnectToSock5Proxy���ص�socket;
�� �� ֵ��ʧ�ܷ���FALSE��
          �ɹ�����TRUE
-------------------------------------------------------------------------------
 �޸ļ�¼��
 ��      ��  �汾  �޸���  �޸�����
 2006/08/21  4.0   ��С��
=============================================================================*/
KD_API_C BOOL32 OspDisConnectFromSock5Proxy(SOCKHANDLE hSocket);

#endif

/*=============================================================================
�� �� ����OspCreateTcpNode
��      �ܣ�����һ��TCP�ڵ㡣���Ժ�����ڵ���Ա����ӡ���ʹ��6682��Ϊport������
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����u32 dwAddr : [in] reserved
u16 wPort : [in] which port to use
bTcpNodeReuse:[in]������node�˳���˿��Ƿ����������û�������������ռ��
�� �� ֵ��s32 - If no error occurs, CreateTcpNode returns a descriptor
referencing the new socket. Otherwise, a value of
INVALID_SOCKET is returned.
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
#ifdef __cplusplus
KD_API_C SOCKHANDLE OspCreateTcpNode(u32 dwAddr, u16 wPort, BOOL32 bTcpNodeReuse = FALSE);
#else
KD_API_C SOCKHANDLE OspCreateTcpNode(u32 dwAddr, u16 wPort, BOOL32 bTcpNodeReuse );
#endif
/*=============================================================================
�� �� ����OspConnectTcpNode
��      �ܣ��ڵ�ַuIpv4Addr�Ͷ˿�uTcpPort�����ӷ�����, �����ö���������.
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����g_cOsp
��      ����uIpv4Addr : [in] �������IP��ַ,
wTcpPort : [in] ������������˿ں�,
wHb: [in] �����������(��),
byHbNum: [in] byHbNum��δ�����Ӽ��Ӧ�����Ϊ��·�ѶϿ�,
dwTimeOutMs: [in] �����dwTimeOutMs���������Ӳ��ɹ�, ���س���. ȱʡֵ0,
��ʾȡconnect��ʱ��ȱʡʱ��(75s).  �ò���Ŀǰ����VxWorks����Ч.
pdwLocalIP: [out] ��ǰ�������õ�IP��ַ

 �� �� ֵ���ɹ�����һ����̬����Ľ���, �˺��û��ɽ���������ͨ��.
 ʧ�ܷ���INVALID_NODE.
 -------------------------------------------------------------------------------
 �޸ļ�¼��
 ��      ��  �汾  �޸���  �޸�����
 2003/03/12  2.0
=============================================================================*/
#ifdef __cplusplus
KD_API_C s32 OspConnectTcpNode(u32 dwIpv4Addr, u16 wTcpPort, u16 wHb = 10, u8 byHbNum = 3, u32 dwTimeoutMs = 0, u32* pdwLocalIP = NULL);
#else
KD_API_C s32 OspConnectTcpNode(u32 dwIpv4Addr, u16 wTcpPort, u16 wHb , u8 byHbNum , u32 dwTimeoutMs , u32* pdwLocalIP );
#endif
/*=============================================================================
�� �� ����OspSetHBParam
��      �ܣ����ý��Ķ���������
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����dwNodeID: ����,
wHb: ��·�������(����Ϊ��λ),
byHbNum: �������ping��uHbNum��û��Ӧ��, �����Ͽ�.

 �� �� ֵ���ɹ�����TRUE, ʧ�ܷ���FALSE.
 -------------------------------------------------------------------------------
 �޸ļ�¼��
 ��      ��  �汾  �޸���  �޸�����
 2003/06/5     2.1
=============================================================================*/
KD_API_C BOOL32 OspSetHBParam(u32 dwNodeID, u16 wHb, u8 byHbNum);

/*=============================================================================
�� �� ����OspNodeDiscCBReg
��      �ܣ�������node�����ж�ʱ��֪ͨ��appid��InstId
ע      �⣺Ŀǰ֧��֪ͨ���ʵ����ÿ�ε��øú�������ָֻ֪ͨ��ʵ����������ע���
����������֪ͨʵ�����������
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����dwNodeID : [in] node id
wAppId : [in] application id
wInsId : [in] instance id
�� �� ֵ���ɹ�����OSP_OK��ʧ�ܲμ�������
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
KD_API_C s32 OspNodeDiscCBReg(u32 dwNodeID, u16 wAppID, u16 wInsID);

/*=============================================================================
�� �� ����OspNodeDiscCBRegQ
��      �ܣ�������node�����ж�ʱ��֪ͨ��appid��InstId
ע      �⣺ÿ�ε��ô˺�����������һ��Ҫ֪ͨ��ʵ�������Ǵﵽ������
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����dwNodeID : [in] node id
wAppId : [in] application id
wInsId : [in] instance id
�� �� ֵ���ɹ�����OSP_OK��ʧ�ܲμ�������
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
KD_API_C s32 OspNodeDiscCBRegQ(u32 dwNodeID, u16 wAppID, u16 wInsID);

/*=============================================================================
�� �� ����OspDisconnectTcpNode
��      �ܣ��Ͽ���һ��node�ϵ����ӡ�
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����u8 node_id : [in] node id
�� �� ֵ��BOOL32 - true Succeeded, false Failed
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
KD_API_C BOOL32 OspDisconnectTcpNode(u32 dwNodeID);

#ifdef _LINUX_
/*=============================================================================
�� �� ����OspDisconnectAllTcpNode
��      �ܣ�ֹͣ��ǰ�ļ���,���Ͽ����ϴ���ȫ������(Ŀǰ��linux����Ч)��
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����
�� �� ֵ��
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2006/12/06    1.0   �޽���
=============================================================================*/
KD_API_C BOOL32 OspDisconnectAllTcpNode();
#endif

/*=============================================================================
�� �� ����OspIsValidTcpNode
��      �ܣ��ж�һ��TCP�ڵ��Ƿ���Ч��
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����u32 node_id : [in] node id
�� �� ֵ��BOOL32 - Valid or not
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
KD_API_C BOOL32 OspIsValidTcpNode(u32 dwNodeID);

/*====================================================================
��������OspIsNodeCheckEnable
���ܣ��ж�ָ��������·��⹦���Ƿ����á�
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
KD_API_C BOOL32 OspIsNodeCheckEnable(u32 dwNodeID);

/*====================================================================
��������OspEnableNodeCheck
���ܣ�����ָ��������·��⹦�ܡ�
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
KD_API_C void OspEnableNodeCheck(u32 dwNodeID);

/*====================================================================
��������OspDisableNodeCheck
���ܣ�����ָ��������·��⹦�ܡ�
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
KD_API_C void OspDisableNodeCheck(u32 dwNodeID);

/*====================================================================
��������OspSetAppPriority
���ܣ�����App�ĵ������ȼ���
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����wAppId -- Ŀ��App��,
byPrior -- ���ȼ�.

 ����ֵ˵�����ɹ�, ����TRUE; ʧ��, ����FALSE.
====================================================================*/
KD_API_C BOOL32 OspSetAppPriority(u16 wAppID, u8 byAppPrior);

/*====================================================================
��������OspGetAppPriority
���ܣ����ָ��App�ĵ������ȼ���
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����wAppId -- (in)Ŀ��App��,
pbyPrior -- (out)���ȼ�.

 ����ֵ˵�����ɹ�, ����TRUE; ʧ��, ����FALSE.
====================================================================*/
KD_API_C BOOL32 OspGetAppPriority(u16 wAppID, u8* pbyAppPrior);

/*=============================================================================
�� �� ����OspIsLocalHost
��      �ܣ��ж��Ƿ��Ǳ���IP����OspIsLocalHost(inet_addr("127.0.0.1"));
ע      �⣺�������Windows��ʹ�ñ������������ȵ���OspInit������WSAStartup��
������Ч�ʽϵͣ���Ҫ�ظ����á�
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����u32 dwIP : [in] ��Ҫ�жϵ�IP
�� �� ֵ��BOOL32    �Ƿ�Ϊ����IP
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
KD_API_C BOOL32 OspIsLocalHost(u32 dwIP);

/*=============================================================================
�� �� ����OspPost
��      �ܣ������첽��Ϣ
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����u32 dwDstIID : [in] destination info
u16 wEvent : [in] OSP_ event
const void* pvContent : [in] message data
u16 wLength : [in] sizeof content in u8s
u32 dwDstNode : [in] destionation socket node
u32 dwSrcIID : [in] source info
u32 dwSrcNode : [in] source node
s32 nTimeout : [in] drop the message when message queue full
�� �� ֵ��s32 - 0 Succeeded, others Failed
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/

//��ԭ���ϲ��post��Ϣ�󲿷�û�жϷ���ֵ������Ϊ���ͱض��ɹ��������������Ļ�����
//�ָ�Ϊ�������󣬿��ܻ��з��ͳ�ʱ����ʧ�ܣ�Ϊ������ǰ�Ľӿ����⣬���Խ���ʱ��2000��Ϊ-1 baihao 2008.6
#ifdef __cplusplus
KD_API_C s32 OspPost(u32 dwDstIID, u16 wEvent, const void* pvContent = 0, u16 wLength = 0,
                u32 dwDstNode = 0, u32 dwSrcIID = MAKEIID(INVALID_APP, INVALID_INS), u32 dwSrcNode = INVALID_NODE, s32 nTimeout = 2000);

/* used only in C++ environment */
s32 OspPost(const char* szDstAlias, u8 byAliasLen, u16 wDstAppID, u16 wEvent,
            const void* pvContent = 0, u16 wLength = 0, u32 dwDstNode = 0, u32 dwSrcIID = MAKEIID(INVALID_APP, INVALID_INS), u32 dwSrcNode = INVALID_NODE, s32 nTimeout = 2000);
#else
KD_API_C s32 OspPost(u32 dwDstIID, u16 wEvent, const void* pvContent, u16 wLength ,
                u32 dwDstNode , u32 dwSrcIID, u32 dwSrcNode, s32 nTimeout);
#endif

/*=============================================================================
�� �� ����OspSend
��      �ܣ�ȫ��ͬ����Ϣ����
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����u32 dwDstIID : [in] destination info
u16 wEvent : [in] OSP_ event
const void* pvContent : [in] message data
u16 wLength : [in] sizeof content in u8s
u32 dwDstNode : [in] destionation socket node
u32 dwSrcIID : [in] source info
u32 dwSrcNode : [in] source node
�� �� ֵ��s32 - 0 Succeeded, others Failed
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
#ifdef __cplusplus
KD_API_C s32 OspSend(u32 dwDstIID, u16 wEvent, const void* pvContent = 0, u16 wLength = 0, u32 dwDstNode = 0,
                u32 dwSrcIID = MAKEIID(INVALID_APP, INVALID_INS), u32 dwSrcNode = INVALID_NODE,
                void* pvAckBuf = NULL, u16 wAckBufLen = 0, u16* pwRealAckLen = NULL,
                u16 wTimeout = 1000);

/* used only in C++ environment */
s32 OspSend(const char* szDstAlias, u8 byAliasLen, u16 wDstAppID, u16 wEvent,
            const void* pvContent = 0, u16 wLength = 0, u32 dwDstNode = 0,
            u32 dwSrcIID = MAKEIID(INVALID_APP, INVALID_INS), u32 dwSrcNode = INVALID_NODE,
            void* pvAckBuf = NULL, u16 wAckBufLen = 0, u16* pwRealAckLen = NULL,
            u16 wTimeout = 1000);
#else
KD_API_C s32 OspSend(u32 dwDstIID, u16 wEvent, const void* pvContent , u16 wLength , u32 dwDstNode ,
                u32 dwSrcIID, u32 dwSrcNode,
                void* pvAckBuf, u16 wAckBufLen , u16* pwRealAckLen ,
                u16 wTimeout);
#endif

/*====================================================================
��������IsOspInitd
���ܣ��ж�OSP�Ƿ��ѳ�ʼ������
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����OSP�ѳ�ʼ��������TRUE�����򷵻�FALSE.
====================================================================*/
KD_API_C BOOL32 IsOspInitd();


/*=============================================================================
�� �� ����OspInit
��      �ܣ�initialize OSP module
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����TelNetEnable : [in] start telnet.exe
          TelNetPort : [in] osp telnet server port
          pchModuleName : [in] process module name��maxlength = 63
�� �� ֵ��
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
#define MAX_MODULE_NAME_LENGTH 256
#ifdef __cplusplus
KD_API_C BOOL32 OspInit(BOOL32 bTelNetEnable=FALSE, u16 wTelnetPort = 0, const char* szModuleName = NULL, u32 dwMaxNodeNum = 512, u32 dwMaxDispatchMsg = 1024);

// Osp��ʼ������չ���Ƿ�ָ��telnet�˿ڸ���
KD_API_C BOOL32 OspInitEx(BOOL32 bTelNetEnable=FALSE, u16 wTelNetPort=0, BOOL32 bTelnetREUSEADDR=TRUE, const char* pchModuleName=NULL, u32 dwMaxNodeNum=512, u32
dwMaxDispatchMsg=1024);
#else
KD_API_C BOOL32 OspInit(BOOL32 bTelNetEnable, u16 wTelnetPort , const char* szModuleName , u32 dwMaxNodeNum , u32 dwMaxDispatchMsg);
KD_API_C BOOL32 OspInitEx(BOOL32 bTelNetEnable, u16 wTelNetPort, BOOL32 bTelnetREUSEADDR, const char* pchModuleName, u32 dwMaxNodeNum, u32
dwMaxDispatchMsg);
#endif

/*====================================================================
  ��������OspSetTeleMode
  ���ܣ�����telnet��ģʽ
  �㷨ʵ�֣�
  ����ȫ�ֱ�����
  �������˵����
  	dwMode	- Telnetģʽ
  	          TELNET_PORT_OFF: �ر�telnet�˿�
  	          TELNET_LOCAL_ON: �����ض˿ڿ�telnet
  	          TELNET_ALL_ON:   ���غ�Զ�̶�����telnet
  ����ֵ˵�����ɹ�����TRUE,ʧ�ܷ���FALSE
  ====================================================================*/
enum ETelMode
{
    TELNET_PORT_OFF = 0,
    TELNET_LOCAL_ONLY = 1,
    TELNET_ALL_ON =2,
};
KD_API_C BOOL32 OspSetTeleMode(u32 dwMode);
/*====================================================================
��������OspQuit
���ܣ��˳�OSP�����ñ�������APP������ʵ����InstanceExit�������˳�ʵ����
�Ͽ�����OSP��㣬��������OSP�������APP��Ȼ�󷵻ء�OSP�˳�֮��
����OSP���񽫲���ʹ�á�
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
KD_API_C void OspQuit();

/*=============================================================================
�� �� ����OspSetPrompt
��      �ܣ������ն���ʾ��
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����
�� �� ֵ��void
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
KD_API_C BOOL32 OspSetPrompt(const char* szPrompt);

/*====================================================================
��������OspStopScrnLog
���ܣ���ͣ��Ļ��־���.
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵������

 ����ֵ˵������.
====================================================================*/
API void OspStopScrnLog();

/*====================================================================
��������OspResumeScrnLog
���ܣ��ָ���Ļ��־���.
      ��OspSetScrnLogLevel()��OspSetGlbLogPrintLevel()�����ʹ��
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵������

 ����ֵ˵������.
====================================================================*/
API void OspResumeScrnLog();

/*=============================================================================
�� �� ����OspGetLocalID
��      �ܣ�����ȫ�ֱ��
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����
�� �� ֵ��s32 - ����ȫ�ֱ��
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
KD_API_C s32 OspGetLocalID(); // ����ȫ�ֱ��

/*=============================================================================
�� �� ����OspEventDesc
��    �ܣ�������Ϣ������
ע    �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��    ����u16 wEventID : [in]��Ϣ��ID
�� �� ֵ��const char*  ��Ϣ�������������ϢID��Ч���߸���Ϣû�������ַ���������
ֵ��ΪNULL��
-------------------------------------------------------------------------------
�޸ļ�¼��
��      ��  �汾  �޸���  �޸�����
2002/05/23  1.0
=============================================================================*/
KD_API_C const char* OspEventDesc(u16 wEventID);

/*=============================================================================
�� �� ����OspEventDescShow
��      �ܣ���ʾ��Ϣ������
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����u16 wEventID : [in]��Ϣ��ID
�� �� ֵ��void
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
KD_API_C void OspEventDescShow(u16 wEventID);

/*=============================================================================
�� �� ����osphelp
��      �ܣ�inline help function of OSP module
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����
�� �� ֵ��void
-------------------------------------------------------------------------------
�޸ļ�¼��
��        ��    �汾  �޸���  �޸�����
2002/05/23    1.0
=============================================================================*/
KD_API_C void osphelp();

/*====================================================================
��������OspSemBCreate
���ܣ�����һ����Ԫ�ź���
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����(out)phSemHandle ���ص��ź������

 ����ֵ˵�����ɹ�����TRUE��ʧ�ܷ���FALSE
====================================================================*/
KD_API_C BOOL32 OspSemBCreate(SEMHANDLE* phSemHandle);

/*====================================================================
��������OspSemCCreate
���ܣ����������ź���
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����(out)phSemHandle �ź���������ز�����
(in)initcount ��ʼ������
(in)MaxSemCount ������

 ����ֵ˵�����ɹ�����TRUE��ʧ�ܷ���FALSE.
====================================================================*/
KD_API_C BOOL32 OspSemCCreate(SEMHANDLE* phSemHandle, u32 dwInitCount, u32 dwMaxSemCount);

/*====================================================================
 ��������OspSemDelete
 ���ܣ�ɾ���ź���
 �㷨ʵ�֣�����ѡ�
 ����ȫ�ֱ�����
 �������˵����(in)hSemHandle ��ɾ���ź����ľ��

 ����ֵ˵�����ɹ�����TRUE��ʧ�ܷ���FALSE.
====================================================================*/
KD_API_C BOOL32 OspSemDelete(SEMHANDLE hSemHandle);

/*====================================================================
��������OspSemTake
���ܣ��ź���p����������ź��������ã�����������ʵ����������(APP)
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����(in)hSemHandle �ź������

 ����ֵ˵�����ɹ�����TRUE��ʧ�ܷ���FALSE.
====================================================================*/
KD_API_C BOOL32 OspSemTake(SEMHANDLE hSemHandle);

/*====================================================================
��������OspSemTakeByTime
���ܣ�����ʱ���ź���p���������ź��������ã���ʱ������dwtime����󣬳�����
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����(in)hSemHandle �ź������, (in)dwtime ��ʱ���(��msΪ��λ)

 ����ֵ˵�����ɹ�����TRUE��ʧ�ܷ���FALSE.
====================================================================*/
KD_API_C BOOL32 OspSemTakeByTime(SEMHANDLE hSemHandle, u32 dwTime);

/*====================================================================
��������OspSemGive
���ܣ��ź���v����
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����(in)hSemHandle �ź������

 ����ֵ˵�����ɹ�����TRUE��ʧ�ܷ���FALSE.
====================================================================*/
KD_API_C BOOL32 OspSemGive(SEMHANDLE hSemHandle);

/*====================================================================
��������OspTaskCreate
���ܣ�������ִ��һ������
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
#ifdef _LINUX_
#define OSPTASK_PARAM_JOINABLE 0xff + PTHREAD_CREATE_JOINABLE  //OspTaskCreateĬ������½�������DETACHED, ������Ҫ��������wFlag��ʹ���̳߳�ΪJOINABLE
    #ifdef __cplusplus
KD_API_C TASKHANDLE OspTaskCreate(LINUXFUNC pvTaskEntry, const char* szName, u8 byPriority, u32 dwStacksize, KD_PTR pvParam, u16 wFlag, TASKID* pdwTaskID = NULL);
    #else
KD_API_C TASKHANDLE OspTaskCreate(LINUXFUNC pvTaskEntry, const char* szName, u8 byPriority, u32 dwStacksize, KD_PTR pvParam, u16 wFlag, TASKID* pdwTaskID );
    #endif
#else
#ifdef __cplusplus
KD_API_C TASKHANDLE OspTaskCreate(void* pvTaskEntry, const char* szName, u8 byPriority, u32 dwStacksize, KD_PTR pvParam, u16 wFlag, TASKID* pdwTaskID = NULL);
#else
KD_API_C TASKHANDLE OspTaskCreate(void* pvTaskEntry, const char* szName, u8 byPriority, u32 dwStacksize, KD_PTR pvParam, u16 wFlag, TASKID* pdwTaskID );
#endif
#endif

#ifdef _LINUX_
KD_API_C TASKHANDLE OspTaskCreate_FIFO(LINUXFUNC pvTaskEntry, const s8* szName, u8 byPriority, u32 dwStacksize, void* dwParam, u16 wFlag, u32 *puTaskID);
#else
KD_API_C TASKHANDLE OspTaskCreate_FIFO(void* pvTaskEntry, const s8* szName, u8 byPriority, u32 dwStacksize, void* dwParam, u16 wFlag, u32 *puTaskID);
#endif


/*====================================================================
��������OspTaskWaitEnd
���ܣ��ȴ�ָ���߳̽���
�㷨ʵ�֣�windows�µ���WaitForSingleObject��Linux�µ���pthread_join
����ȫ�ֱ�����
�������˵����hTask    --   ��ȴ������ĵ��߳�(Linux����Ҫ�����Ƿ������Ե��߳�)

  ����ֵ˵������Ӧ�����ķ���ֵ
====================================================================*/
KD_API_C s32 OspTaskWaitEnd(TASKHANDLE hTask);


/*====================================================================
  ��������OspTaskSetAffinity
  ���ܣ�
  ��װ
  �㷨ʵ�֣�����ѡ�
  ����ȫ�ֱ�����
  �������˵����hTaskHandle:windows�µ��߳�/���̵ľ����hTaskId:�󶨵��߳�/����/�����ID��
                dwCpuId:��󶨵�CPU(��0��ʼ����,��εݼ�)
                byTaskType���󶨵��߳�/����/��������ͣ�0--���̣�1-�̣߳�����-���񣩣�linux��Ĭ��0����
                pdwPreviousBind�����֮ǰ�ý���/�߳�/���񱻰󶨵�ĳCPU����᷵�ظ�CPU�ţ���Solaris����Ч��
  ����ֵ˵�����ɹ�����TRUE, ʧ�ܷ���FALSE.
  ====================================================================*/
#ifdef _MSC_VER
#ifdef __cplusplus
KD_API_C BOOL32 OspTaskSetAffinity(TASKHANDLE hTaskHandle, u32 dwCpuId, u8 byTaskType = 0, u32* pdwPreviousBind = NULL);
#else
KD_API_C BOOL32 OspTaskSetAffinity(TASKHANDLE hTaskHandle, u32 dwCpuId, u8 byTaskType, u32* pdwPreviousBind);
#endif
#else
    #ifdef __cplusplus
KD_API_C BOOL32 OspTaskSetAffinity(TASKHANDLE hTaskHandle, u32 dwCpuId, u8 byTaskType = 0, u32* pdwPreviousBind = NULL);
    #else
KD_API_C BOOL32 OspTaskSetAffinity(TASKHANDLE hTaskHandle, u32 dwCpuId, u8 byTaskType , u32* pdwPreviousBind);
    #endif //__cplusplus
#endif

/*====================================================================
��������OspTaskExit
���ܣ��˳��������������˳�֮ǰ�û�Ҫע���ͷű�����������ڴ桢�ź�������Դ��
��װWindows��ExitThread(0)��vxWorks��taskDelete(0)��
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
KD_API_C BOOL32 OspTaskExit();

/*====================================================================
��������OspTaskTerminate
���ܣ�ǿ����ָֹ������
��װWindows��ExitThread()��vxWorks��taskDelete()��
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����handle--��ɱ�����handle

 ����ֵ˵����
====================================================================*/
KD_API_C BOOL32 OspTaskTerminate(TASKHANDLE hTaskHandle);

/*====================================================================
��������OspTaskSuspend
���ܣ�����ǰ����
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
#ifdef __cplusplus
KD_API_C BOOL32 OspTaskSuspend(TASKHANDLE hTaskHandle = 0);
#else
KD_API_C BOOL32 OspTaskSuspend(TASKHANDLE hTaskHandle);
#endif

/*====================================================================
��������OspTaskResume
���ܣ�����ǰ����
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
KD_API_C BOOL32 OspTaskResume(TASKHANDLE hTaskHandle);

/*====================================================================
��������OspTaskSetPriority
���ܣ��ı���������ȼ���

 �㷨ʵ�֣�����ѡ�
 ����ȫ�ֱ�����
 �������˵����

  ����ֵ˵����
====================================================================*/
#ifdef __cplusplus
KD_API_C BOOL32 OspTaskSetPriority(TASKHANDLE hTaskHandle, u8 byNewPriority, s32 nNewSchedPolicy = 0);
#else
KD_API_C BOOL32 OspTaskSetPriority(TASKHANDLE hTaskHandle, u8 byNewPriority, s32 nNewSchedPolicy);
#endif

/*====================================================================
��������OspTaskGetPriority
���ܣ������������ȼ���

 �㷨ʵ�֣�����ѡ�
 ����ȫ�ֱ�����
 �������˵����

  ����ֵ˵����
====================================================================*/
#ifdef __cplusplus
KD_API_C BOOL32 OspTaskGetPriority(TASKHANDLE hTaskHandle, u8* puPri, s32* pnSchedPolicy = NULL);
#else
KD_API_C BOOL32 OspTaskGetPriority(TASKHANDLE hTaskHandle, u8* puPri, s32* pnSchedPolicy);
#endif

/*====================================================================
��������OspSetTaskPriorityByName
���ܣ�ͨ��������������������ȼ�

 �㷨ʵ�֣�����ѡ�
 ����ȫ�ֱ�����
 �������˵����

  ����ֵ˵����
====================================================================*/
#ifdef __cplusplus
KD_API_C void OspSetTaskPriorityByName(const char* szName, u8 byPriority, s32 nNewSchedPolicy = 0);
#else
KD_API_C void OspSetTaskPriorityByName(const char* szName, u8 byPriority, s32 nNewSchedPolicy);
#endif

/*====================================================================
��������OspSetTaskPriorityByName
���ܣ�ͨ�����������������ʱ��Ƭ��С��linux����Ч
 �㷨ʵ�֣�����ѡ�
 ����ȫ�ֱ�����
 �������˵����

  ����ֵ˵����
====================================================================*/
KD_API_C void OspSetTaskNiceByName(const char* szName, s32 nNice);

/*====================================================================
��������OspSetTaskPriorityByName
���ܣ�ͨ����������ȡ��������ȼ�

 �㷨ʵ�֣�����ѡ�
 ����ȫ�ֱ�����
 �������˵����

  ����ֵ˵����
====================================================================*/
#ifdef __cplusplus
KD_API_C void OspGetTaskPriorityByName(const char* szName, u8* pbyPriority, s32* pnNewSchedPolicy = NULL);
#else
KD_API_C void OspGetTaskPriorityByName(const char* szName, u8* pbyPriority, s32* pnNewSchedPolicy);
#endif

/*====================================================================
��������OspTaskSelfHandle
���ܣ���õ�������ľ��
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
KD_API_C TASKHANDLE OspTaskSelfHandle();

/*====================================================================
��������OspTaskSelfHandle
���ܣ���õ��������ID
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
KD_API_C TASKID OspTaskSelfID();

/*====================================================================
��������OspTaskHandleVerify
���ܣ��ж�ָ�������Ƿ����
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
KD_API_C BOOL32 OspTaskHandleVerify(TASKHANDLE hTaskHandle);

/*====================================================================
��������OspTaskSafe
���ܣ������������񲻱��Ƿ�ɾ��
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
KD_API_C void OspTaskSafe();

/*====================================================================
��������OspTaskUnsafe
���ܣ��ͷŵ��������ɾ��������ʹ�õ���������Ա���ȫɾ��
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
KD_API_C void OspTaskUnsafe();

/*====================================================================
��������OspTaskDelay
���ܣ�������ʱ
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����uMseconds--��ʱ���(ms)

 ����ֵ˵����
====================================================================*/
#define OspDelay     OspTaskDelay

KD_API_C void OspTaskDelay(u32 dwMseconds);

/*====================================================================
��������OspCreateMailbox
���ܣ�������Ϣ����
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
KD_API_C BOOL32 OspCreateMailbox(const char* szName, u32 dwMsgNumber, u32 dwMsgLength, MAILBOXID* ptQueueIDRead, MAILBOXID* ptQueueIDWrite);

/*====================================================================
��������OspCloseMailbox
���ܣ��ر�����
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����uQueueIDRead, uQueueIDWrite--����Ķ���д���

 ����ֵ˵����
====================================================================*/
KD_API_C void OspCloseMailbox(MAILBOXID tQueueIDRead, MAILBOXID tQueueIDWrite);

/*====================================================================
��������OspSetSocketTimeOut
���ܣ�android����������ķ��ͺͽ��ճ�ʱʱ��(ע��ͬһ��fdֻ�ܵ���һ�Σ���ζ�ͬһ��fd�������������)
�㷨ʵ�֣��ú���ֻ�ڰ�׿��������
����ȫ�ֱ�����
�������˵����
nSocketFd  :OspCreateMailbox���صĶ�д�˾��
dwTimeout  :���õĳ�ʱʱ�䣬��λms
bIsWriteId :�Ƿ��Ƕ�д�˽������� 0��ʾ���ö��ˣ�1��ʾ����д��

 ����ֵ˵����
====================================================================*/
#ifdef _ANDROID_
KD_API_C BOOL32 OspSetSocketTimeOut(s32 nSocketFd,s32 dwTimeout,BOOL32 bIsWriteId);
#endif

/*====================================================================
������        ��OspSndMsg
����        �������䷢��Ϣ
�㷨ʵ��    ��
����ȫ�ֱ�������
�������˵����tQueueID: ����ID,
lpMsgBuf: ����ָ��,
len: ����,
timeout: ��ʱֵ(ms). Windows�¸ò�����Ч, ��������һֱ����ֱ���пյ�buffer.
VxWorks��, ȱʡΪ2��;
OSP_NO_WAIT(0): ��������������;
OSP_WAIT_FOREVER(-1): ����������ֱ���пյ�buffer.

 ����ֵ˵��  ���ɹ�����TRUE, ʧ�ܻ�ʱ����FALSE.
====================================================================*/
#ifdef __cplusplus
KD_API_C BOOL32 OspSndMsg(MAILBOXID tQueueID, const char* szMsgBuf, u32 dwMsgLen, s32 nTimeout = 2000);
#else
KD_API_C BOOL32 OspSndMsg(MAILBOXID tQueueID, const char* szMsgBuf, u32 dwMsgLen, s32 nTimeout);
#endif
//for uniplay
KD_API_C BOOL32 OspMessage(u32 dwWriteID, const char* pchMsgBuf, u32 dwLen, int nTimeout);

/*====================================================================
������        ��OspRcvMsg
����        ������������Ϣ
�㷨ʵ��    ��
����ȫ�ֱ�������
�������˵����
OSTOKEN tQueueID    ����ID
u32  dwTimeout     ��ʱ(����)
LPVOID *lpMsgBuf    ������Ϣ����ָ��
����ֵ˵��    ��
====================================================================*/
KD_API_C BOOL32 OspRcvMsg(MAILBOXID tQueueID, u32 dwTimeout, char * szMsgBuf, u32 dwMsgLen, u32* pdwLenRcved);

/*====================================================================
��������OspClkRateGet
���ܣ��õ�tick���ȣ�n ticks/sec
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
KD_API_C u32 OspClkRateGet();

/*====================================================================
��������OspTickGet
���ܣ�ȡ�õ�ǰ��tick��
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
KD_API_C u32 OspTickGet();

/*====================================================================
��������OspTickGet64
���ܣ�ȡ�õ�ǰ��tick��, 64���ȣ�����������
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����
����ֵ˵����64λtick
˵��:�ù��ܽ���Linux, Windows��ʵ��, VXWorks�Ϸ���0
====================================================================*/
KD_API_C u64 OspTickGet64();

KD_API_C void OspCpuShow();

//CPU��Ϣ
typedef struct
{
    // ���аٷֱȣ�0��100
    u8 m_byIdlePercent;
}TOspCpuInfo;

/*====================================================================
��������OspGetCpuInfo
���ܣ�ȡ�õ�ǰ��CPU��Ϣ
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����ptCpuInfo���û�CPU��Ϣ�ṹ
����ֵ˵����ΪTRUEʱ��ʾ��ȡ��Ϣ�ɹ��������ʾʧ��
====================================================================*/
KD_API_C BOOL32 OspGetCpuInfo(TOspCpuInfo* ptCpuInfo);

//�ڴ���Ϣ
typedef struct
{
    //�����ڴ��С(KByte)
    u32 m_dwPhysicsSize;
    //��ʹ���ڴ�(KBytes)
    u32 m_dwAllocSize;
    //�����ڴ�(KBytes)
    u32 m_dwFreeSize;
}TOspMemInfo;

/*====================================================================
��������OspGetMemInfo
���ܣ�ȡ�õ�ǰ��Mem��Ϣ
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����ptMemInfo���û�MEM��Ϣ�ṹ
����ֵ˵����ΪTRUEʱ��ʾ��ȡ��Ϣ�ɹ��������ʾʧ��
====================================================================*/
KD_API_C BOOL32 OspGetMemInfo( TOspMemInfo* ptMemInfo );
//�ڴ���Ϣ
typedef struct
{
    //�����ڴ��С(KByte)
    u32 m_dwPhysicsSize;
    //�����ڴ�(KBytes);
    u32 m_dwFreeSize;
    //������(KBytes)
    u32 m_dwBuffers;
    //����(KBytes)
    u32 m_dwCached;
    //Swap����(KBytes)
    u32 m_dwSwapCached;
}TOspMemInfoEx;

/*====================================================================
��������OspGetMemInfoEx
���ܣ�ȡ�õ�ǰ��Mem��Ϣ
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����ptMemInfo���û�MEM��Ϣ�ṹ
����ֵ˵����ΪTRUEʱ��ʾ��ȡ��Ϣ�ɹ��������ʾʧ��
====================================================================*/
KD_API_C BOOL32 OspGetMemInfoEx( TOspMemInfoEx* ptMemInfo );

//ʱ����Ϣ
typedef struct
{
    //��(2006)
    u16 m_wYear;
    //��(1--12)
    u16 m_wMonth;
    //��(1--31)
    u16 m_wDay;
    //ʱ(0--23)
    u16 m_wHour;
    //��(0--59)
    u16 m_wMinute;
    //��(0--59)
    u16 m_wSecond;
}TOspTimeInfo;

/*====================================================================
��������OspGetTimeInfo
���ܣ�ȡ�õ�ǰ��Time��Ϣ
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����ptTimeInfo��ϵͳtime��Ϣ�ṹ
����ֵ˵����ΪTRUEʱ��ʾ��ȡ��Ϣ�ɹ��������ʾʧ��
====================================================================*/
KD_API_C BOOL32 OspGetTimeInfo(TOspTimeInfo* ptTimeInfo);

/*====================================================================
��������OspSetTimeInfo
���ܣ����õ�ǰ��Time��Ϣ
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����ptTimeInfo��ϵͳtime��Ϣ�ṹ
����ֵ˵����ΪTRUEʱ��ʾ��ȡ��Ϣ�ɹ��������ʾʧ��
====================================================================*/
KD_API_C BOOL32 OspSetTimeInfo(TOspTimeInfo* ptTimeInfo);

/*====================================================================
  ��������OspSetTimeInfoEx
  ���ܣ����õ�ǰ��Time��Ϣ
  �㷨ʵ�֣�����ѡ�
  ����ȫ�ֱ�����
  �������˵����Senconds ----�Լ�Ԫ Epoch��1970-01-01 00:00:00 UTC���𾭹���ʱ�䣬����Ϊ��λ
  ����ֵ˵����ΪTRUEʱ��ʾ��ȡ��Ϣ�ɹ��������ʾʧ��
====================================================================*/
KD_API_C BOOL32 OspSetTimeInfoEx(s64 Senconds);


//���̷�����Ϣ
typedef struct
{
    //���̷�����С(MByte)
    u32 m_dwPhysicsSize;
    //��ʹ�ô��̷�����С(MBytes)
    u32 m_dwUsedSize;
    //���ô��̷�����С(MBytes)
    u32 m_dwFreeSize;
}TOspDiskInfo;
//���̷�����󳤶�
#define MAX_PARTION_NAME_LENGTH        255
/*====================================================================
��������OspGetDiskInfo
���ܣ�ȡ�õ�ǰ�Ĵ��̷�����Ϣ
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����const char* pchPartionName�� ������
                    win32 : "c:"
                    Vxworks : "/ata0/"
                    Linux : "/"
              ptDiskInfo��ϵͳ���̷�����Ϣ�ṹ
����ֵ˵����ΪTRUEʱ��ʾ��ȡ��Ϣ�ɹ��������ʾʧ��
====================================================================*/
KD_API_C BOOL32 OspGetDiskInfo(const char* szPartionName, TOspDiskInfo* ptDiskInfo);

//////////////////////////////////////////////////////////////////////
//    �׽��ַ�װ���û�ʹ���׽���ǰ�����ȵ���SockInit()���׽��ֿ���г�ʼ����
//    ʹ����֮������Ҫ����SockCleanup()�ͷŶ��׽��ֿ��ʹ�á�����vxWorks��
//    Windows�Ĺر��׽��ֵĺ�����ͬ�������ڵ���socket��connect�Ⱥ���ʱ������
//    ֵ����Ҳ��һ����OSPҲ�����˱�Ҫ�ķ�װ��ԭ���Ǳ�����Windows�»���һ�¡�
/////////////////////////////////////////////////////////////////////

/*====================================================================
��������SockInit
���ܣ��׽��ֳ�ʼ������װWindows�µ�WSAStartup��vxWorks�·���TRUE
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵�����ɹ�����TRUE��ʧ�ܷ���FALSE
====================================================================*/
#define OspSockInit     SockInit
KD_API_C BOOL32 SockInit();

/*====================================================================
��������SockShutdown
���ܣ��Ը�ƽ̨shutdown�ļ򵥷�װ
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����hSock--Ҫ�������׽��֣�
              dwMode--����ģʽ, ��ȡֵΪSTOP_SEND, STOP_RECV��STOP_BOTH

����ֵ˵�����ɹ�����TRUE��ʧ�ܷ���FALSE
====================================================================*/
#ifdef _LINUX_
#define OspSockShutdown SockShutdown
KD_API_C BOOL32 SockShutdown(SOCKHANDLE hSock, u32 dwMode);
#endif

/*====================================================================
��������SockClose
���ܣ��ر��׽��֣���װwindows�µ�closesocket��vxworks�µ�close.
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����tSock--���ر��׽��ֵľ��������socketʱ���أ���

 ����ֵ˵�����ɹ�����TRUE��ʧ�ܷ���FALSE
====================================================================*/
#define OspSockClose SockClose
KD_API_C BOOL32 SockClose(SOCKHANDLE hSock);

/*====================================================================
��������SockCleanup
���ܣ��׽������٣���װwindows��WSACleanup��vxWorks�·���TRUE
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵�����ɹ�����TRUE��ʧ�ܷ���FALSE
====================================================================*/
#define OspSockCleanup SockCleanup
KD_API_C BOOL32 SockCleanup();

// ���ڷ�װ����Windows���ڲ�������Ϊ׼����VxWorks���ṩ��Ӧ����
/*====================================================================
��������OspSerialOpen
���ܣ���ָ���Ĵ���
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵�����ɹ����ش򿪴��ڵľ����ʧ�ܷ���INVALID_SERIALHANDLE
====================================================================*/
KD_API_C SERIALHANDLE OspSerialOpen(u8 byPort);

/*====================================================================
��������OspSerialClose
���ܣ��ر�ָ���Ĵ���
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
KD_API_C BOOL32 OspSerialClose(SERIALHANDLE hCom);

/*====================================================================
��������OspSerialRead
���ܣ���ָ���Ĵ��ڶ�����
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
KD_API_C BOOL32 OspSerialRead(SERIALHANDLE hCom, char * szBuf, u32 dwToRead, u32* pdwRead);

/*====================================================================
��������OspSerialWrite
���ܣ���ָ���Ĵ���д����
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
KD_API_C BOOL32 OspSerialWrite(SERIALHANDLE hCom, const char* szBuf, u32 dwToWrite, u32* pdwWrite);

/*====================================================================
��������OspSetCommTimeouts
���ܣ����ô��ڳ�ʱ
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
KD_API_C BOOL32 OspSetCommTimeouts(SERIALHANDLE hCom, TOspCommTimeouts* ptCommTimeouts);

/*====================================================================
��������OspGetCommState
���ܣ���ô���״̬
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
KD_API_C BOOL32 OspGetCommState(SERIALHANDLE hCom, TOspDCB* ptDCB);

/*====================================================================
��������OspSetCommState
���ܣ����ô���״̬
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
KD_API_C BOOL32 OspSetCommState(SERIALHANDLE hCom, TOspDCB* ptDCB);

/*====================================================================
��������OspEscapeCommFunction
���ܣ�ʹ�ô�����չ����
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
KD_API_C BOOL32 OspEscapeCommFunction(SERIALHANDLE hCom, u32 dwFunc);

/*====================================================================
��������OspPurgeComm
���ܣ���������δ�����ݣ���ֹ���ڶ�д����
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
KD_API_C BOOL32 OspPurgeComm(SERIALHANDLE hCom, u32 dwFlags);

/*====================================================================
��������OspClearCommError
���ܣ���Windows��ClearCommError��ͬ
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
KD_API_C BOOL32 OspClearCommError(SERIALHANDLE hCom, u32* pdwErrors, TOspComStat* ptStat);

/*====================================================================
��������OspGetCommTimeouts
���ܣ�ȡ�ô򿪴��ڵĳ�ʱ����
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵����
====================================================================*/
KD_API_C BOOL32 OspGetCommTimeouts(SERIALHANDLE hCom, TOspCommTimeouts* ptCommTimeouts);

/*====================================================================
��������OspAgentStart
���ܣ�����һ��Osp���Դ���, ���а���һ�����Է�����APP��һ���ͻ���APP, ����
��Ҫ��ͬ��APP��, ��Ϣ������̶���һ����.
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����(in)port -- �˿ں�, ��������APP��������ڵ����øö˿ڴ���֮

 ����ֵ˵����
====================================================================*/
KD_API_C s32 OspAgentStart(u16 wPort);

/*====================================================================
��������OspMemPoolCreate
���ܣ�����һ���ڴ��
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����pOspMemPoolHandle   ָ���ڴ�ؾ��ָ��
              ptMemPoolPara        �ڴ�ز����ṹ���ָ��

 ����ֵ˵�����ɹ�����TRUE��ʧ�ܷ���FALSE.
====================================================================*/
#define OSP_MEMPOOLHANDLE       void*

typedef struct tagOspMemPoolPara
{
    u32  dwMaxFreePercent;        //�����аٷֱȣ���Χ(0-100)�����ڿ����ڴ����ÿһ���ڴ�����ڴ����������ڴ���
                                  //����������dwMaxFreePercent���������ֻ���ϵͳ
                                  //����0��ʾ�����ڴ�أ�100��ʾ�ڴ������ǰ���黹�ڴ��ϵͳ��
    u32  dwLargeBlockLevelGrowSize;    //����2M�ڴ��ˮƽ����������С����λM��Ĭ��ֵ1,
	                                   //�ҵ�ǰջ�ܷ��������ڴ��Ϊ(2+15*dwLargeBlockLevelGrowSize)M,�ɷ���Ĵ���ڴ水��
									   //(��Ĭ��Ϊ1�ǿɷ������󵥿��ڴ�Ϊ17M)
                                        //(������2M���ֵ��ڴ������ʼ�հ���2��������)
}TOspMemPoolPara;
KD_API_C BOOL32 OspMemPoolCreate(TOspMemPoolPara* ptMemPoolPara,OSP_MEMPOOLHANDLE *pOspMemPoolHandle);


/*====================================================================
��������OspAllocMem
���ܣ���osp�ڲ����ڴ���з����ڴ��,����ܷ���2M�ռ�
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����size: ��������ڴ���С��

 ����ֵ˵�����ɹ�����ָ����䵽���ڴ���ָ�룬ʧ�ܷ���NULL.
====================================================================*/
KD_API_C void *OspAllocMem(size_t size);

/*====================================================================
��������OspAllocMemEx
���ܣ����ڴ���з����ڴ��
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����size: ��������ڴ���С��
              OspMemPoolHanle: �ڴ�����ڵ��ڴ�ؾ��
                               Ĭ��Ϊ�յ�ʱ������osp�ڴ�ض����Ϸ���

 ����ֵ˵�����ɹ�����ָ����䵽���ڴ���ָ�룬ʧ�ܷ���NULL.
====================================================================*/
KD_API_C void *OspAllocMemEx(size_t size,OSP_MEMPOOLHANDLE OspMemPoolHanle);


/*====================================================================
��������OspMemPoolStateShow
���ܣ���ʾ��ǰ�ڴ���ڴ����ʹ�õ�״��
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����
              OspMemPoolHanle: �ڴ�����ڵ��ڴ�ؾ��

 ����ֵ˵�����ɹ�����ָ����䵽���ڴ���ָ�룬ʧ�ܷ���NULL.
====================================================================*/
KD_API_C void OspMemPoolStateShow(OSP_MEMPOOLHANDLE pOspMemPoolHandle);



/*====================================================================
��������OspFreeMem
���ܣ��ͷ����ȷ�����ڴ��
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����token: ָ����ͷŵ��ڴ���ָ�롣

 ����ֵ˵������.
====================================================================*/
KD_API_C void OspFreeMem(void* pvMemToken);


/*====================================================================
��������OspMemPoolDestroy
���ܣ�����ָ�����ڴ��
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵���� OspMemPoolHanle: �����ٵ��ڴ�ؾ��

 ����ֵ˵�����ɹ�����TRUE��ʧ�ܷ���FALSE.
====================================================================*/
KD_API_C BOOL32 OspMemPoolDestroy(OSP_MEMPOOLHANDLE OspMemPoolHanle);


#define OSP_SAFE_FREE(p) { if (NULL != (p)) { OspFreeMem((p)); (p) = NULL; } }

/*====================================================================
��������OspSetPriRealTime
���ܣ��Ѷ�ʱ������Ϣ���͵�������ߵ���ϵͳnet���񻹸ߵ����ȼ�
�㷨ʵ�֣�����ѡ�
����ȫ�ֱ�����
�������˵����

 ����ֵ˵������.
====================================================================*/
KD_API_C void OspSetPriRealTime();

/*=============================================================================
�� �� ����OspAddrListGet
��      �ܣ���ȡ������ַ������
ע      �⣺�������Windows��ʹ�ñ������������ȵ���OspInit������WSAStartup��
������Ч�ʽϵͣ���Ҫ�ظ����á�
�㷨ʵ�֣�
ȫ�ֱ�����
��      ���� u32     adwIP[] : [in/out]�û���������ڵ�ַ�����ݵ�������׵�ַ
u16   wNum : [in]�û����������Ĵ�С
�� �� ֵ�� ���ر�����ַ���е�ַ����������ʱ����0
=============================================================================*/
KD_API_C u16 OspAddrListGet(u32 adwIPList[], u16 wNum);

//ϵͳ���Ʋ���
#define OSP_ETHERNET_ADAPTER_MAX_IP          16           /*ÿ���ӿ�������ַ����*/
#define OSP_ETHERNET_ADAPTER_MAX_NUM         32           /*ÿ���豸���ӿ���*/
#define OSP_ETHERNET_ADAPTER_NAME_LENGTH     64           /*ÿ���ӿ�������󳤶�*/
#define OSP_ETHERNET_ADAPTER_MAC_LENGTH      6            /*�ӿڵ�MAC��ַ����*/

//����״̬,��Ӧ��TOSPEthernetAdapterInfo �ṹ��nState�ֶ�
#define OSP_ETHERNET_ADAPTER_UNKNOWN         0
#define OSP_ETHERNET_ADAPTER_UP              1
#define OSP_ETHERNET_ADAPTER_DOWN            2

/* ����������Ϣ */
typedef struct {
    u32 nId;                                         /*������*/
    u32 nState;                                     /*����״̬*/
    u8 achName[OSP_ETHERNET_ADAPTER_NAME_LENGTH];         /*������*/
    u8 achDescription[OSP_ETHERNET_ADAPTER_NAME_LENGTH];    /*������Ϣ����*/
    u8 achMacAddr[OSP_ETHERNET_ADAPTER_MAC_LENGTH];         /*���������ַ*/
    u32 nIpNum;                                     /*��ַ����*/
    u32 anIp[OSP_ETHERNET_ADAPTER_MAX_IP];                 /*��ַ*/
}TOSPEthernetAdapterInfo;

/* ���������Ϣ */
typedef struct {
    u32 nNum;                                                         /*��������*/
    TOSPEthernetAdapterInfo atEthernetAdapter[OSP_ETHERNET_ADAPTER_MAX_NUM];/*������Ϣ*/
}TOSPEthernetAdapterInfoAll;


/*=============================================================================
�� �� ����OspGetEthernetAdapterInfoAll
��      �ܣ���ȡ��ϵͳ������̫��������Ϣ
ע      �⣺�������Windows��ʹ�ñ������������ȵ���OspInit������WSAStartup��
������Ч�ʽϵͣ���Ҫ�ظ����á�
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����TEthernetAdapterInfoAll ��������Ϣ�ṹ���ο����ݽṹ�Ķ���
�� �� ֵ�� TRUE/ FALSE �ɹ�/ʧ��
=============================================================================*/
KD_API_C BOOL32 OspGetEthernetAdapterInfoAll(TOSPEthernetAdapterInfoAll* ptEthernetAdapterInfoAll);

/*=============================================================================
�� �� ����OspGetEthernetAdapterInfo
��      �ܣ����������Ż�ȡ������Ϣ
ע      �⣺�������Windows��ʹ�ñ������������ȵ���OspInit������WSAStartup��
������Ч�ʽϵͣ���Ҫ�ظ����á�
�㷨ʵ�֣�
ȫ�ֱ�����
��      ����nEthAdapterId �������0-ETHERNET_ADAPTER_MAX_NUM�����֧��16������
            TEthernetAdapterInfo ��������Ϣ�ṹ
�� �� ֵ��TRUE/FALSE  �ɹ�/ʧ��
=============================================================================*/
KD_API_C BOOL32 OspGetEthernetAdapterInfo(u32 dwEthAdapterID, TOSPEthernetAdapterInfo* ptEthernetAdapterInfo);

/*=============================================================================
�� �� ����OspSetMemCheck
��      �ܣ���ȡ�ڴ��ַ����
ע      �⣺
�㷨ʵ�֣�
ȫ�ֱ�����
��      ���� u32 * pdwCheckMem :    Ҫ�����ڴ��ַ
u32 dwCheckValue ��  ��������ֵ
BOOL32    bEqual ����������Ϊ��ʱ����ʾҪ�����ڴ��ַ���ݲ���������ֵʱ��Ҫ�澯
��������Ϊ��ʱ����ʾҪ�����ڴ��ַ���ݵ�������ֵʱ��Ҫ�澯
�� �� ֵ�� �ɹ�����TRUE, ʧ�ܷ���FALSE.
=============================================================================*/
KD_API_C BOOL32 OspSetMemCheck(u32* pdwCheckMem, u32 dwCheckValue, BOOL32 bEqual);

#ifdef __cplusplus
/* ������Ա������ģ�����Ա������ʵ�� */
template <class I, s32 maxins, class A, u8 maxAliasLen>
BOOL32 zTemplate<I, maxins, A, maxAliasLen>::InitAliasArray()
{
    for (s32 i = 0; i < maxins; i++)
    {
        instAliasArray[i].instId = 0xFFFF;
        instAliasArray[i].aliasRet = 0;
        instAliasArray[i].nextLoc = 0xFFFF;

        bakInstAliasArray[i].instId = 0xFFFF;
        bakInstAliasArray[i].aliasRet = 0;
        bakInstAliasArray[i].nextLoc = 0xFFFF;
    }
    curBakArrayNum = 0;

    return TRUE;
}

template <class I, s32 maxins, class A, u8 maxAliasLen>
u32 zTemplate<I, maxins, A, maxAliasLen>::AliasToWord(char * szAlias, u8 byLen)
{
    u32 dwRet = 0;
    for (u8 i = 0; i < byLen; i++)
    {
        dwRet =  (dwRet << 5) + dwRet + (*(szAlias + i));
    }

    dwRet = dwRet & (maxins-1);
    return dwRet;
}

template <class I, s32 maxins, class A, u8 maxAliasLen>
BOOL32 zTemplate<I, maxins, A, maxAliasLen>::IsInBakArray(u32 dwAtoW)
{
    /*���ȼ��������*/
    if (0xFFFF == instAliasArray[dwAtoW].instId)    /*�����������λ�û�û�б�ռ��*/
    {
        return FALSE;      /*���ʵ����ŵ���������*/
    }
    else         /*�����������λ�û��Ѿ���ռ��*/
    {
        return TRUE;   /*���ʵ����ŵ�bak�����еĿ���λ��*/
    }
}

template <class I, s32 maxins, class A, u8 maxAliasLen>
s32 zTemplate<I, maxins, A, maxAliasLen>::GetInstanceNumber()
{
    return maxins;
}

template <class I, s32 maxins, class A, u8 maxAliasLen>
u8 zTemplate<I, maxins, A, maxAliasLen>::GetMaxAliasLen()
{
    return maxAliasLen;
}

template <class I, s32 maxins, class A, u8 maxAliasLen>
CInstance* zTemplate<I, maxins, A, maxAliasLen>::GetInstance(u16 wInsID)
{
    if (CInstance::DAEMON == wInsID)
    {
        return &daemIns;
    }

    if ((wInsID > 0) && (wInsID <= maxins))
    {
        return &insarray[wInsID - 1];
    }

    return NULL;
}

template <class I, s32 maxins, class A, u8 maxAliasLen>
BOOL32 zTemplate<I, maxins, A, maxAliasLen>::SetInstAlias(u16 wInsID, const char* szAlias, u8 byLen)
{
    u32  dwCycTime = 0;

    /*�ȰѼ�¼��Ϣ������ٲ���������*/
    if (CInstance::DAEMON != wInsID)
    {
        u32 dwSetRet = AliasToWord((s8*)szAlias, byLen);    /*ͨ��������������ֵ*/
        if (dwSetRet >= maxins)
        {
            return FALSE;
        }

        BOOL32 bIsBak = IsInBakArray(dwSetRet);    /*ȷ�����λ��*/
        if (FALSE == bIsBak)     /*�������������*/
        {
            instAliasArray[dwSetRet].aliasRet = dwSetRet;
            instAliasArray[dwSetRet].instId = wInsID;
            instAliasArray[dwSetRet].nextLoc = 0xFFFF;   /*��ʼ��*/
        }
        else         /*�����bak������*/
        {
            u32 dwLoc = curBakArrayNum;
            /*�����ݼ�¼��bak������Ӧλ����*/
            for (dwLoc = 0; dwLoc < maxins; dwLoc++)
            {
                if (0xFFFF == bakInstAliasArray[dwLoc].instId)
                {
                    break;
                }
            }
            if (dwLoc >= maxins)
            {
                return FALSE;
            }

            bakInstAliasArray[dwLoc].aliasRet = dwSetRet;
            bakInstAliasArray[dwLoc].instId = wInsID;
            bakInstAliasArray[dwLoc].nextLoc = 0xFFFF;   /*��ʼ��*/

            /*����ͬ����ֵ�����ݿ���������*/
            if (0xFFFF == instAliasArray[dwSetRet].nextLoc)   /*����������δ����*/
            {
                instAliasArray[dwSetRet].nextLoc = dwLoc;    /*ָ��bak�����д��λ��*/
            }
            else
            {
                TInstAliasInfo * ptTempAlias = &bakInstAliasArray[instAliasArray[dwSetRet].nextLoc];
                if (NULL == ptTempAlias)
                {
                    return FALSE;
                }
                dwCycTime = 0;
                while (0xFFFF != ptTempAlias->nextLoc)
                {
                    if (ptTempAlias->nextLoc >= maxins)
                    {
                        return FALSE;
                    }
                    ptTempAlias = &bakInstAliasArray[ptTempAlias->nextLoc];
                    if (NULL == ptTempAlias)
                    {
                        return FALSE;
                    }
                    dwCycTime++;
                    if (dwCycTime > maxins)
                    {
                        OspPrintf(TRUE, FALSE, "SetInstAlias() return Cycle as dwCycTime=%d\n", dwCycTime);
                        return FALSE;
                    }
                }
                ptTempAlias->nextLoc = dwLoc; /*�ҵ�bak���������һ����ͬ����ֵ��λ��*/
            }
            curBakArrayNum++;      /*bak�����Ÿ�������*/
        }
    }

    CInstance* pcIns = GetInstance(wInsID);
    if ((NULL != pcIns) && (byLen <= maxAliasLen))
    {
        CInstance* pcOtherIns = FindInstByAlias(szAlias, byLen);
        if ((NULL != pcOtherIns) && (pcOtherIns->GetInsID() != pcIns->GetInsID()))
        {
            return FALSE;
        }
        memcpy(pcIns->m_alias, szAlias, byLen);
        pcIns->m_aliasLen = byLen;
        //return pcIns->SetAlias(szAlias, byLen);
    }
    return TRUE;
}

template <class I, s32 maxins, class A, u8 maxAliasLen>
CInstance* zTemplate<I, maxins, A, maxAliasLen>::FindInstByAlias(const char* szAlias, u8 byLen)
{
    /* �ȿ��Ƿ���Daemonʵ�� */
    u8 byAliasLen=0;
    u32 dwCycTime = 0;

    if (maxAliasLen < byLen)
    {
        return NULL;
    }

    s8 achliasBuf[MAX_ALIAS_LEN];
    memset(achliasBuf, 0, MAX_ALIAS_LEN);

    CInstance *pcIns = GetInstance(CInstance::DAEMON);
    if ((NULL != pcIns) && (pcIns->GetAlias(achliasBuf, maxAliasLen, &byAliasLen)))
    {
        if ((byAliasLen == byLen) && (memcmp(achliasBuf, szAlias, byLen) == 0))
        {
            return pcIns;
        }
    }

    /* �ٿ��Ƿ���ͨʵ�� */
    TInstAliasInfo* ptTempAlias = NULL;
    u32 dwSetRet = AliasToWord((s8*)szAlias, byLen);
    /*�Ȳ���������*/
    if (dwSetRet >= maxins)
    {
        return NULL;
    }
    ptTempAlias = &instAliasArray[dwSetRet];
    if (NULL == ptTempAlias)
    {
        return NULL;
    }
    pcIns = GetInstance(ptTempAlias->instId);
    if ((NULL != pcIns) && (pcIns->GetAlias(achliasBuf, maxAliasLen, &byAliasLen)))
    {
        if ((byAliasLen == byLen) && (0 == memcmp(achliasBuf, szAlias, byLen)))
        {
            return pcIns;
        }
    }
    /*�ٲ���bak����*/
    do
    {
        if ((NULL == ptTempAlias) || (ptTempAlias->nextLoc >= maxins))
        {
            return NULL;
        }
        ptTempAlias = &bakInstAliasArray[ptTempAlias->nextLoc];
        if (NULL == ptTempAlias)
        {
            return NULL;
        }
        CInstance * pcIns = GetInstance(ptTempAlias->instId);
        if ((NULL != pcIns) && (pcIns->GetAlias(achliasBuf, maxAliasLen, &byAliasLen)))
        {
            if ((byAliasLen == byLen) && (memcmp(achliasBuf, szAlias, byLen) == 0))
            {
                return pcIns;
            }
        }

        dwCycTime++;
        if (dwCycTime > maxins)
        {
            OspPrintf(TRUE, FALSE, "FindInstByAlias() return Cycle as dwCycTime=%d\n", dwCycTime);
            return NULL;
        }
    }while (0xFFFF != ptTempAlias->nextLoc);

    return NULL;
}

/*���ʵ��������¼��Ϣ*/
template <class I, s32 maxins, class A, u8 maxAliasLen>
BOOL32 zTemplate<I, maxins, A, maxAliasLen>::ClearInstAlias(u16 wInsID, const char* szAlias, u8 byLen)
{
    u32 dwCycTime = 0;

    if ((maxAliasLen < byLen) || (wInsID == CInstance::DAEMON))
    {
        return FALSE;
    }

    u32 dwSetRet = AliasToWord((char *)szAlias, byLen);      /*ͨ��������������ֵ*/
    if (dwSetRet >= maxins)
    {
        return FALSE;
    }
    /*�Ȳ��������飬�ٲ��ұ�������*/
    if (instAliasArray[dwSetRet].instId == wInsID)
    {
        if (0xFFFF == instAliasArray[dwSetRet].nextLoc)   /*����������δ����*/
        {
            instAliasArray[dwSetRet].aliasRet = 0;       /*��ʼ��*/
            instAliasArray[dwSetRet].instId = 0xFFFF;
            instAliasArray[dwSetRet].nextLoc = 0xFFFF;
        }
        else
        {
            TInstAliasInfo* ptTempAlias = &instAliasArray[dwSetRet];
            if (NULL == ptTempAlias)
            {
                return FALSE;
            }
            if (ptTempAlias->nextLoc >= maxins)
            {
                return FALSE;
            }
            TInstAliasInfo * ptRelocAlias = &bakInstAliasArray[ptTempAlias->nextLoc];
            if (NULL == ptRelocAlias)
            {
                return FALSE;
            }

            dwCycTime = 0;
            while (0xFFFF != ptRelocAlias->nextLoc)
            {
                ptTempAlias->aliasRet = ptRelocAlias->aliasRet;    //����һ���¼��Ϣ��䱾���¼��Ϣ
                ptTempAlias->instId = ptRelocAlias->instId;

                if (ptRelocAlias->nextLoc >= maxins)
                {
                    return FALSE;
                }
                ptTempAlias = ptRelocAlias;         //λ���Ƶ���һ��
                ptRelocAlias = &bakInstAliasArray[ptRelocAlias->nextLoc];
                if (NULL == ptRelocAlias)
                {
                    return FALSE;
                }

                dwCycTime++;
                if (dwCycTime > maxins)
                {
                    OspPrintf(TRUE, FALSE, "ClearInstAlias(1) return Cycle as dwCycTime=%d\n", dwCycTime);
                    return FALSE;
                }
            }

            ptTempAlias->aliasRet = ptRelocAlias->aliasRet;    //�ѵ����һ���¼��Ϣ��
            ptTempAlias->instId = ptRelocAlias->instId;
            ptTempAlias->nextLoc = 0xFFFF;

            ptRelocAlias->aliasRet = 0;       //������һ���¼��
            ptRelocAlias->instId = 0xFFFF;
            ptRelocAlias->nextLoc = 0xFFFF;

            curBakArrayNum--;      /*bak�����Ÿ�������*/
        }
    }
    else
    {
        if (0xFFFF == instAliasArray[dwSetRet].nextLoc)   /*����������δ����*/
        {
            return FALSE;
        }
        else
        {
            TInstAliasInfo * ptTempAlias = &bakInstAliasArray[instAliasArray[dwSetRet].nextLoc];
            if (NULL == ptTempAlias)
            {
                return FALSE;
            }
            TInstAliasInfo * ptRelocAlias = &(instAliasArray[dwSetRet]);

            dwCycTime = 0;
            while (ptTempAlias->instId != wInsID)
            {
                ptRelocAlias = ptTempAlias;

                if (0xFFFF != ptTempAlias->nextLoc)
                {
                    if (ptTempAlias->nextLoc >= maxins)
                    {
                        return FALSE;
                    }

                    ptTempAlias = &bakInstAliasArray[ptTempAlias->nextLoc];
                    if (NULL == ptTempAlias)
                    {
                        return FALSE;
                    }
                    dwCycTime++;
                    if (dwCycTime > maxins)
                    {
                        OspPrintf(TRUE, FALSE, "ClearInstAlias(2) return Cycle as dwCycTime=%d\n", dwCycTime);
                        return FALSE;
                    }
                }
                else
                {
                    return FALSE;
                }
            }

            /*�ҵ�bak�����ж�Ӧʵ����¼λ�ã������λ�õļ�¼ֵ���Ѽ�¼������������*/
            if (0xFFFF == ptTempAlias->nextLoc)
            {
                if (NULL != ptRelocAlias)
                {
                    ptRelocAlias->nextLoc = 0xFFFF;
                }

                ptTempAlias->aliasRet = 0;     //��λ��Ϊ������ֵ�����һλ�ã�ֱ�����
                ptTempAlias->instId = 0xFFFF;
            }
            else
            {
                ptRelocAlias = &bakInstAliasArray[ptTempAlias->nextLoc];
                if (NULL == ptRelocAlias)
                {
                    return FALSE;
                }
                dwCycTime = 0;
                while (0xFFFF != ptRelocAlias->nextLoc)
                {
                    ptTempAlias->aliasRet = ptRelocAlias->aliasRet;    //����һ���¼��Ϣ��䱾���¼��Ϣ
                    ptTempAlias->instId = ptRelocAlias->instId;

                    if (ptRelocAlias->nextLoc >= maxins)
                    {
                        return FALSE;
                    }

                    ptTempAlias = ptRelocAlias;         //λ���Ƶ���һ��
                    ptRelocAlias = &bakInstAliasArray[ptRelocAlias->nextLoc];
                    if (NULL == ptRelocAlias)
                    {
                        return FALSE;
                    }
                    dwCycTime++;
                    if (dwCycTime > maxins)
                    {
                        OspPrintf(TRUE, FALSE, "ClearInstAlias(3) return Cycle as dwCycTime=%d\n", dwCycTime);
                        return FALSE;
                    }
                }
                ptTempAlias->aliasRet = ptRelocAlias->aliasRet;    //�ѵ����һ���¼��Ϣ��
                ptTempAlias->instId = ptRelocAlias->instId;
                ptTempAlias->nextLoc = 0xFFFF;

                ptRelocAlias->aliasRet = 0;       //������һ���¼��
                ptRelocAlias->instId = 0xFFFF;
                ptRelocAlias->nextLoc = 0xFFFF;
            }

            curBakArrayNum--;      /*bak�����Ÿ�������*/
        }
    }
    return TRUE;
}
#endif

/*/////////////////////////////////////////////////////////
//    loop buffer light version from toolbox 2008.6 baihao
/////////////////////////////////////////////////////////*/

#define            OSP_LB_ERR_BASE                  7000
#define            OSP_LB_ERR_OK                    0
#define            OSP_LB_ERR_PARAM                 OSP_LB_ERR_BASE + 1
#define            OSP_LB_ERR_NOMEM                 OSP_LB_ERR_BASE + 2
#define            OSP_LB_ERR_FULL                  OSP_LB_ERR_BASE + 3
#define            OSP_LB_ERR_EMPTY                 OSP_LB_ERR_BASE + 4
#define            OSP_LB_ERR_NOT_CREATE            OSP_LB_ERR_BASE + 5
#define            OSP_LB_ERR_CREATED               OSP_LB_ERR_BASE + 6
#define            OSP_LB_ERR_SYSTEM                OSP_LB_ERR_BASE + 7
#define            OSP_LB_ERR_INVALID_HANDLE        OSP_LB_ERR_BASE + 8
#define            OSP_LB_ERR_INVALID_MEM           OSP_LB_ERR_BASE + 9

#define OSP_LB_DATA_SIZE        108        // assume cpu 64 bits

/* due to thread safety and efficiency,
i use structure instead of a pointer to represent a handle */
typedef struct lb_data
{
/* user MUST NOT touch this while operate on loop buffer!!
    but you need to memset this to 0 before create loop buffer*/
    u8 rawdata[OSP_LB_DATA_SIZE];
} osplb_handle;

typedef struct lb_create_param
{
    s32 m_nBufSize;            /* in bytes */
    s32 m_nMaxUnitSize;        /* in bytes */
    u8  m_byRaceLvl;        /* useless in light version */
} osplb_create_param;

s16 osplb_create(osplb_handle* phHandle, osplb_create_param* ptParam);

s16 osplb_close(osplb_handle* phHandle);

s16 osplb_reset(osplb_handle* phHandle);

s16 osplb_write(osplb_handle* phHandle, u8* pbyBuf, s32 nBufSize);

s16 osplb_read(osplb_handle* phHandle, u8* pbyBuf, s32* pnBufSize);

s16 osplb_total_size(osplb_handle* phHandle, s32* pnSize);

s16 osplb_available_size(osplb_handle* phHandle, s32* pnSize);

s16 osplb_is_empty(osplb_handle* phHandle, u8* pbyEmpty);

KD_API_C s32 OspSystem(const char* szCmd);    // Ƕ��ʽ�ϲ�Ҫʹ�ã�getpid()����

#define MAX_LIST_FILE_NUM             4096
#define MAX_LIST_FILE_NAME_LEN        128

typedef struct ListFileInfoTag
{
    u32 m_dwNum;
    s8 m_astrFileName[MAX_LIST_FILE_NUM][MAX_LIST_FILE_NAME_LEN];
} TListFileInfo;

s32 OspListFile(char * szFilePath, TListFileInfo* ptFileInfo);

#if defined(_MSC_VER) && !defined(_EQUATOR_)
    #pragma pack(pop)
#endif

#endif // _OSP_H

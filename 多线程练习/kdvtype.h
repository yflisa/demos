/*****************************************************************************
   模块名      : KDV type
   文件名      : kdvtype.h
   相关文件    :
   文件实现功能: KDV宏定义
   作者        : 魏治兵
   版本        : V3.0  Copyright(C) 2001-2002 KDC, All rights reserved.
-----------------------------------------------------------------------------
   修改记录:
   日  期      版本        修改人      修改内容
   2004/02/17  3.0         魏治兵        创建
   2013/08/09  4.0         吴彬          扩展支持64位
******************************************************************************/
#ifndef _KDV_TYPE_H_
#define _KDV_TYPE_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
      /* Type definition */
/*-----------------------------------------------------------------------------
系统公用文件，开发人员严禁修改
------------------------------------------------------------------------------*/
//定长类型
typedef char     s8;
typedef unsigned char   u8;
typedef short           s16;
typedef unsigned short  u16;
typedef int    s32;

#ifndef _NOT_DEFINE_L32 //确保可以用该宏屏蔽这个定义
typedef s32    l32;
#endif

#ifdef _MSC_VER
    typedef __int64            s64;
    typedef unsigned __int64 u64;
#else
    typedef long long        s64;
    typedef unsigned long long u64;
#endif

	//兼容32流的 u32 定义
#if defined(_WIN64) || defined(WIN64) ||defined (__LP64__) || defined (__64BIT__) || defined (_LP64) || (__WORDSIZE == 64)
	typedef unsigned int    u32;
    #define KD_PTR          void*
#else
	typedef unsigned long    u32;
    #define KD_PTR           u32
#endif

#ifndef BOOLTYPE
#define BOOLTYPE
typedef s32 		    BOOL;
#endif

#ifndef BOOL32TYPE
#define BOOL32TYPE
typedef s32             BOOL32;
#endif

#ifndef TRUE
#define TRUE    1
#endif
#ifndef FALSE
#define FALSE   0
#endif

#ifndef _MSC_VER
#ifndef LPSTR
#define LPSTR   char *
#endif
#ifndef LPCSTR
#define LPCSTR  const char *
#endif
#endif

//the follow macros is used to decide to export symbol or not
//usually we need to hidden symbol in static lib and export in dynamic lib
//in linux ,we use -fvisibility=hidden to hidd all symbol
//add 2018/06/06

#ifndef CBB_PUBLIC
#define CBB_PUBLIC
	#if defined _WIN32 || defined __CYGWIN__
		#define KD_DLL_IMPORT __declspec(dllimport)
		#define KD_DLL_EXPORT __declspec(dllexport)
		#define KD_DLL_LOCAL
	#else  //for linux gcc
		#if __GNUC__ >= 4
			#define KD_DLL_IMPORT __attribute__ ((visibility ("default")))
			#define KD_DLL_EXPORT __attribute__ ((visibility ("default")))
			#define KD_DLL_LOCAL  __attribute__ ((visibility ("hidden")))
		#else
			#define KD_DLL_IMPORT
			#define KD_DLL_EXPORT
			#define KD_DLL_LOCAL
		#endif
	#endif// defined _WIN32 || defined __CYGWIN__

	#if defined KD_DLL_EXPORTS || defined USRDLL || defined _AFXDLL || defined _WINDLL || defined _AFXEXT // if we are building the  dynamic lib,Export the symbols
    	//KD_API_C 按照C风格声明接口
    	#ifdef __cplusplus
        	#define KD_API_C extern "C" KD_DLL_EXPORT
    	#else
        	#define KD_API_C KD_DLL_EXPORT
    	#endif

    	//类使用KD_API，不能使用C风格的声明
    	#define KD_API KD_DLL_EXPORT
    	
	#else // KD_DLL_EXPORTS is not defined: this means this is a static lib.
    	#ifdef __cplusplus
        	#define KD_API_C extern "C"
    	#else
        	#define KD_API_C 
    	#endif//__cplusplus

        //类使用KD_API，不能使用C风格的声明
    	#define KD_API
    	
	#endif //KD_DLL_EXPORTS
	
#endif //CBB_PUBLIC


#ifdef __cplusplus
}
#endif  /* __cplusplus */

#endif /* _KDV_def_H_ */

/* end of file kdvdef.h */


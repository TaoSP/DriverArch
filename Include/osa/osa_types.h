/*******************************************************************************
* osa_types.h
* Author : Tao
* Version: V1.0.0  2020-01-01 Create
* Description:
*******************************************************************************/

#ifndef _OSA_TYPES_H_
#define _OSA_TYPES_H_

#ifdef __cplusplus
extern "C" {
#endif

#ifndef DEFINED_Bool
#define DEFINED_Bool
typedef unsigned char      Bool; 
#endif

#ifndef DEFINED_Int32
#define DEFINED_Int32
typedef int                Int32;
#endif

#ifndef DEFINED_Int16
#define DEFINED_Int16
typedef short              Int16;
#endif

#ifndef DEFINED_Int8
#define DEFINED_Int8
typedef char               Int8;
#endif

#ifndef DEFINED_Ptr
#define DEFINED_Ptr
typedef void *             Ptr;
#endif

#ifndef DEFINED_String
#define DEFINED_String
typedef char *             String;
#endif

#ifndef DEFINED_Char
#define DEFINED_Char
typedef char               Char;
#endif

#ifndef DEFINED_Uint32
#define DEFINED_Uint32
typedef unsigned int       Uint32;
#endif

#ifndef DEFINED_Uint16
#define DEFINED_Uint16
typedef unsigned short     Uint16;
#endif

#ifndef DEFINED_Uint8
#define DEFINED_Uint8
typedef unsigned char      Uint8;
#endif

#ifndef DEFINED_Int64
#define DEFINED_Int64
typedef long long          Int64;
#endif

#ifndef DEFINED_Bool16
#define DEFINED_Bool16
typedef unsigned short     Bool16;
#endif

#ifndef DEFINED_Bool32
#define DEFINED_Bool32
typedef unsigned int       Bool32;
#endif

#ifndef DEFINED_Int32L
#define DEFINED_Int32L
typedef long               Int32L;
#endif

#ifndef DEFINED_Uint32L
#define DEFINED_Uint32L
typedef unsigned long      Uint32L;
#endif

#ifndef DEFINED_Uint64
#define DEFINED_Uint64
typedef unsigned long long Uint64;
#endif

#ifndef DEFINED_Float32
#define DEFINED_Float32
typedef float              Float32;
#endif

#ifndef DEFINED_Float64
#define DEFINED_Float64
typedef double             Float64;
#endif

#ifndef DEFINED_Handle
#define DEFINED_Handle
typedef void *             Handle;
#endif

#ifndef DEFINED_Empty
#define DEFINED_Empty
typedef void               Empty;
#endif

#ifdef __cplusplus
}
#endif

#endif  /*  _OSA_TYPES_H_  */

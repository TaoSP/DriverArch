/*******************************************************************************
* osa_macro.h
* Author : Tao
* Version: V1.0.0  2020-01-01 Create
* Description:
*******************************************************************************/

#ifndef _OSA_MACRO_H_
#define _OSA_MACRO_H_

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

#define OSA_SOK        0
#define OSA_EFAIL     -1

#define OSA_TRUE	  (1)
#define OSA_FALSE	  (0)

#define OSA_NULL      (NULL)

#define OSA_max(a, b)    ( (a) > (b) ? (a) : (b) )
#define OSA_min(a, b)    ( (a) < (b) ? (a) : (b) )

#define OSA_isSuccess(status)  (OSA_SOK == (status))
#define OSA_isFail(status)     (OSA_SOK != (status))

#define OSA_isTrue(status)     ((status))
#define OSA_isFalse(status)    (!(status))

#define OSA_isNull(ptr)        (NULL == (ptr))
#define OSA_isNotNull(ptr)     (NULL != (ptr))

#define OSA_print printf
#define OSA_INFO printf
#define OSA_ERROR printf

#ifdef __cplusplus
}
#endif

#endif  /*  _OSA_MACRO_H_  */

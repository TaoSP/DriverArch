/*******************************************************************************
* pdc.h
* Author : Tao
* Version: V1.0.0  2020-01-01 Create
* Description:
*******************************************************************************/

#ifndef _PDC_H_
#define _PDC_H_

#include "osa.h"

#ifdef __cplusplus
extern "C" {
#endif

Int32 PDC_drvInit(void);
void PDC_drvDeinit(void);

#ifdef __cplusplus
    }
#endif

#endif


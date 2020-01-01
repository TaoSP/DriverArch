/*******************************************************************************
* prc_gpio.h
* Author : Tao
* Version: V1.0.0  2020-01-01 Create
* Description:
*******************************************************************************/

#ifndef _PRC_GPIO_H_
#define _PRC_GPIO_H_

#include "osa.h"

#ifdef __cplusplus
        extern "C" {
#endif

typedef enum
{
    PRC_GPIO_DIR_OUT  = 0,
    PRC_GPIO_DIR_IN   = 1,
} PRC_GpioDirect;

typedef struct
{
    Uint32  dir;
    Uint32  mode;
    Uint32  pullType;
} PRC_GpioParams;

Int32 PRC_gpioGetPin(Uint32 gpio, PRC_GpioParams *pParams);
Int32 PRC_gpioPutPin(Uint32 gpio);
Int32 PRC_gpioSetDirection(Uint32 gpio, PRC_GpioDirect direct);
Int32 PRC_gpioSetLevel(Uint32 gpio, Uint32 val);
Int32 PRC_gpioGetLevel(Uint32 gpio,  Uint32 *pLevel);

#ifdef __cplusplus
    }
#endif

#endif  /* _PRC_GPIO_H_ */


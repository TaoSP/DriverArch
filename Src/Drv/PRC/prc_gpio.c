/*******************************************************************************
* prc_gpio.c
* Author : Tao
* Version: V1.0.0  2020-01-01 Create
* Description:
*******************************************************************************/

#include "prc_gpio.h"

Int32 PRC_gpioGetPin(Uint32 gpio, PRC_GpioParams *pParams)
{
    OSA_INFO("PRC_gpioGetPin OK, gpio=%u\n", gpio);
    return OSA_SOK;
}

Int32 PRC_gpioPutPin(Uint32 gpio)
{
    return OSA_SOK;
}

Int32 PRC_gpioSetDirection(Uint32 gpio, PRC_GpioDirect direct)
{
    OSA_INFO("PRC_gpioSetDirection: gpio%u, dir=%d\n", gpio, direct);
    return OSA_SOK;
}

Int32 PRC_gpioSetLevel(Uint32 gpio, Uint32 val)
{
    OSA_INFO("PRC_gpioSetLevel: gpio%u, level=%u\n", gpio, val);
    return OSA_SOK;
}

Int32 PRC_gpioGetLevel(Uint32 gpio,  Uint32 *pLevel)
{
    return OSA_SOK;
}

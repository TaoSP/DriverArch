/*******************************************************************************
* pdc.c
* Author : Tao
* Version: V1.0.0  2020-01-01 Create
* Description:
*******************************************************************************/

#include "pdc.h"
#include "prc_gpio.h"

Int32 gpioTest(void)
{
    Uint32 gpio = 20;
    PRC_GpioParams params = { 0 };

    PRC_gpioGetPin(gpio, &params);
    PRC_gpioSetDirection(gpio, 0);
    return PRC_gpioSetLevel(gpio, 1);
}

Int32 PDC_drvInit(void)
{
    Int32 status;

    OSA_INFO("PDC Driver Initial OK !\n");

    status = gpioTest();
    return status;
}

void PDC_drvDeinit(void)
{
    OSA_INFO("PDC Driver Exit OK !\n");
}

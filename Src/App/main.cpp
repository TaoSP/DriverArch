/*******************************************************************************
* main.cpp
* Author : Tao
* Version: V1.0.0  2020-01-01 Create
* Description:
*******************************************************************************/
#include <hello.hpp>
#include <pdc.h>

int main()
{
    Hello hello;
    hello.show();

    PDC_drvInit();
    
    return 0;
}

/*
 * File:   main.c
 * Author: 20185090
 *
 * Created on 12 de Fevereiro de 2021, 15:49
 */


#include <xc.h>
#include "Config.h"

void main(void) {
   TRISDbits.TRISD7 = 0;
    
    while (1)
    {
        PORTDbits.RD7 = 0;
        __delay_ms (500);
        PORTDbits.RD7 = 1;
        __delay_ms (500);
    }
    return;
}

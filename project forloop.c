//forloopPIC16F877A
//Anokhautomation
#include <xc.h>
__CONFIG(FOSC_HS & WDTE_OFF & PWRTE_OFF & BOREN_OFF & LVP_OFF & CPD_OFF & WRT_OFF & CP_OFF);

#define _XTAL_FREQ 10000000
int led[]={0b00000001,0b00000010,0b00000100,0b00001000,0b00010000,0b00100000,0b01000000,0b10000000};// integer array

void main(void) {
    TRISC =0x00;// (0b00000000)all pins of PORTC are configured as OUTPUT
    while(1)
    {
        for (int i=0;i<8;i++)
        {PORTC=led [i];
    __delay_ms(250);
    }
    }
    return;
}
*************************************************************************************************************************************

//forloopPIC16F877A
//Anokhautomation
#include <xc.h>
__CONFIG(FOSC_HS & WDTE_OFF & PWRTE_OFF & BOREN_OFF & LVP_OFF & CPD_OFF & WRT_OFF & CP_OFF);

#define _XTAL_FREQ 10000000
int led[]={0b00000001,0b00000010,0b00000100,0b00001000,0b00010000,0b00100000,0b01000000,0b10000000};
int led1[]={0b10000000,0b01000000,0b00100000,0b00010000,0b00001000,0b0000100,0b00000010,0b00000001};
void main(void) {
    TRISC =0b00000000;//0x00;all pins of Port C are set as output 
    TRISB =0b00000000;//0x00;all pins of Port C are set as output 
    while(1)
    {
      for (int i=0;i<8;i++)
        {PORTC=led [i];
    __delay_ms(100);
      for (int i=0;i<8;i++)
        {PORTB=led1 [i];
    __delay_ms(250);
       
        
    }
    }
    }
    return;
    }

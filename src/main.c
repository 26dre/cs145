#include "avr.h"
// #include <iostream.h>

int main() {
    DDRB = 0x01;
    // SET_BIT(PORTB, 2);
    // //initializes the first bit of the Bs to 1. All others are 0 allowing for input
    
    while(1){

        // SET_BIT (PORTB, 1);
        // PORTB = 0x01;

        // SET_BIT(PORTB, 1);

        // if(GET_BIT(PORTB, 1) == 0) {
        //     PORTB = 1;
        // } 

        PORTB = 0x01;

        wait(30000);

        // CLR_BIT(PORTB, 1);
        PORTB = 0x00;
        wait(30000);
       
    };
}
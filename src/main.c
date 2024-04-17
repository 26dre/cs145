#include "avr.h"
// #include <iostream.h>

int main() {
    DDRB = 0x01;
    //initializes the first bit of the Bs to 1. All others are 0 allowing for input
    
    while(1){
        PORTB = 0;

        for (int i = 0; i < 10 ; i++){
            wait(5000);
        }
        PORTB = 1;
        for (int i = 0; i < 10; i++){
            wait(5000);
        }
    };
}
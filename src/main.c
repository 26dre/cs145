#include "avr.h"
// #include <iostream.h>

int main() {
    DDRB = 1;
    
    while(1){
        PORTB = 0;
        wait(32000);
        PORTB = 1;
        wait(32000);
    };
}
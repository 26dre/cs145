#include "avr.h"
// #include <iostream.h>

int main() {
    DDRB = 1;
    // PORTB = 1;
    while(1){
        wait(10000);
        PORTB = 0;
        wait(10000);
        PORTB = 1;
    };
}
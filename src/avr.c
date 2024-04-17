/**
 * avr.h
 * Copyright (C) 2001-2020, Tony Givargis
 */

#ifndef _AVR_H_
#define _AVR_H_

#include <avr/interrupt.h>
#include <avr/pgmspace.h>
#include <avr/io.h>

#define XTAL_FRQ 8000000lu


#define SET_BIT(p,i) ((p) |=  (1 << (i)))
#define CLR_BIT(p,i) ((p) &= ~(1 << (i)))
#define GET_BIT(p,i) ((p) &   (1 << (i)))

#define NOP() asm volatile("nop"::)

void avr_wait(unsigned short msec);
void wait(long unsigned instructions_to_wait){
    volatile long unsigned i;
    for (i = 0; i < instructions_to_wait; i++);
}
#endif /* _AVR_H_ */
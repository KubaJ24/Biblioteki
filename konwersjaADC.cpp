#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "konwersjaADC.h"

void adc_config(){
    ADCSRA = 0b10001111;
    ADMUX = 0b10000000;
}

void adc_start(){
    ADCSRA |= 1<<ADSC;
}

int adc_result(){
    int loval = 0;
    int hival = 0;
    int wynik = 0;
    loval = ADCL;
    hival = ADCH;
    wynik = (hival<<8) | loval; 
    return wynik;
}
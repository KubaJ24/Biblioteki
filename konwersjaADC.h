#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

void adc_config();
/*
Konfiguracja ADC
Źródło odniesienia AREF, kanał A0, presc. 128
*/

void adc_start();
/*
Rozpoczęcie przetwarzania
*/

int adc_result();
/*
Zwraca wartość wyniku konwersji;
*/
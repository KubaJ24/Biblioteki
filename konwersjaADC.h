#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

/*
Bit ADSC jest jedynką przez cały czas trwania konwersji
*/

void adc_config();
/*
Konfiguracja ADC
Źródło odniesienia Reserved, kanał A0, presc. 128
*/

void adc_start();
/*
Rozpoczęcie przetwarzania
*/

int adc_result();
/*
Zwraca wartość wyniku konwersji;
*/

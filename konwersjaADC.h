/*
Wersja 1.1 
19.08.2023
Podstawowa konfiguracja i pobieranie wyniku ADC
*/

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

/*
Bit ADSC jest jedynką przez cały czas trwania konwersji
*/

void adc_config();
/*
Konfiguracja ADC
Źródło odniesienia AVcc (Vcc), kanał A0, presc. 128
*/

void adc_start();
/*
Rozpoczęcie przetwarzania
*/

int adc_result();
/*
Zwraca wartość wyniku konwersji;
*/

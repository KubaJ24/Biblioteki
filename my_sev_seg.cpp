/*
Biblioteka do obsługi wyświetlacza 7 segmentowego
Wersja 0.1 - przed testami
*/

#include "my_sev_seg.h"

void digit_display(char* digit){
    if(*digit < 0 || *digit > 9){ Serial.println("digit_display error - wrong size"); }

    if(*digit == 0){ PORTD = 0b0001000; }
    else if(*digit == 1){ PORTD = 0b1011110; }
    else if(*digit == 2){ PORTD = 0b0010001; }
    else if(*digit == 3){ PORTD = 0b0010100; }
    else if(*digit == 4){ PORTD = 0b1000110; }
    else if(*digit == 5){ PORTD = 0b0100100; }
    else if(*digit == 6){ PORTD = 0b0100000; }
    else if(*digit == 7){ PORTD = 0b0011110; }
    else if(*digit == 8){ PORTD = 0b0000000; }
    else if(*digit == 9){ PORTD = 0b0000100; }
}

void number_extract(char number, char* digit1, char* digit2){
    //Zapis w zmiennej wskazywanej przez wskaźnik
    //Część dziesiętna
    *digit1 = number / 10;
    //Cyfra na końcu
    *digit2 = number % 10;
}

void number_display(char *digit1, char* digit2){
    PORTB = ~(1 << c_anode1) || ~(1 << c_anode2);
    digit_display(*digit1);
    PORTB = (1 << c_anode1) || ~(1 << c_anode2);
    _delay_ms(10);
    PORTB = ~(1 << c_anode1) || ~(1 << c_anode2);
    digit_display(*digit2);
    PORTB = ~(1 << c_anode1) || (1 << c_anode2);
    _delay_ms(10);
}
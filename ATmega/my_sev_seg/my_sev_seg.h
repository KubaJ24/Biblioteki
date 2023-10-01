/*
Wersja 1.1
18.09.2023
Biblioteka do obsługi wyświetlacza 7 segmentowego
Zmiana char na uint8_t - Arduino IDE nie wyświetla w terminalu char jako liczby
*/

//Piny anod cyfry 1 i 2 
//PORTB
#define c_anode1 0
#define c_anode2 1

void digit_display(uint8_t* digit);
/*
Ustawia piny portu D w zależności od przekazanej cyfry
W przypadku błędu zgłasza komunikat przez Serial Terminal - tylko do testów
if ... else if zamiast switch() -> switch() nie obsługuje wskaźników
*/

void number_extract(uint8_t number, uint8_t* digit1, uint8_t* digit2);
/*
Rozbija przekazaną liczbę "number" na dziesiątki i jedności
dziesiątki zapisują się w zmiennej wskazywanej przez wskaźnik digit1 a jedności w digit2
*/

void number_display(uint8_t *digit1, uint8_t* digit2);
/*
Odpowiada za multipleksowanie i wyświetlanie cyfr ze zmiennych wskazwanych przez wskaźniki digit1 i digit2
*/
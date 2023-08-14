/*
Biblioteka do obsługi wyświetlacza 7 segmentowego
Wersja 1
Zmiana char na int - Arduino IDE nie wyświetla w terminalu char jako liczby
*/

//Piny anod cyfry 1 i 2 
//PORTB
#define c_anode1 0
#define c_anode2 1

void digit_display(int* digit);
/*
Ustawia piny portu D w zależności od przekazanej cyfry
W przypadku błędu zgłasza komunikat przez Serial Terminal - tylko do testów
*/

void number_extract(int number, int* digit1, int* digit2);
/*
Rozbija przekazaną liczbę "number" na dziesiątki i jedności
dziesiątki zapisują się w zmiennej wskazywanej przez wskaźnik digit1 a jedności w digit2
*/

void number_display(int *digit1, int* digit2);
/*
Odpowiada za multipleksowanie i wyświetlanie cyfr ze zmiennych wskazwanych przez wskaźniki digit1 i digit2
*/
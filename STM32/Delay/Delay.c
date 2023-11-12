#include "Delay.h"

void Delay_ms_config(void){
    //2 MHz CLOCK
    SysTick_Config(2000000 / 1000);
}

void SysTick_Handler(void){
    //uint32_t Tick - zmienna globalna
    Tick++;
}

void Delay_ms(uint32_t Delay){
    uint32_t now_time = Tick;
    while(Tick < (Tick + Delay)){
        //WAIT
    }
}
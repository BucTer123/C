#include "stm32f4xx.h"
#include "embedded1.h"

void rcc_ahb1enr(void) {
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;

    GPIOA->MODER &= ~(3 << 10);
    GPIOA->MODER |=  (1 << 10);

    while (1) {
        GPIOA->BSRR = (1 << 5);

        for (volatile int i = 0; i < 100000; i++);

        GPIOA->BSRR = (1 << (5 + 16));

        for (volatile int i = 0; i < 100000; i++);
    }
}
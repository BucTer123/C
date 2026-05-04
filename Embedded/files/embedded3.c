#include "embedded3.h"

void EXTI0_IRQHandler(void) {
	if (EXTI->PR & (1 << 0)) {
		GPI0A->ODR ^= (1 << 5);
		EXTI->PR |= (1 << 0);
	}
}

void handler_main() {
	EXTI0_IRQHandler();
}
#include "embedded2.h"

void uart_send(char c) {
	while (!(USART2->SR & USART_SR_TXE));
	USART2->DR = c;
}

void main_file() {
	uart_send('Z');
}
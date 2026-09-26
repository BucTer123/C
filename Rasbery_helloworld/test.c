#include <stdio.h>
#include "pico/stdlib.h"

int main() {
	stdio_init_all();
	printf("Hello, world!");
	while (true) {
		sleep_ms(1000);
	}
}

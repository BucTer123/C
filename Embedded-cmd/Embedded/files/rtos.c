#include "rtos.h"

void led_task(void *arg) {
	while (1) {
		toggle_led();
		vTaskDelay(1000 / portTICK_PERIOD_MS);
	}
}

void main_led() {
	led_task();
}
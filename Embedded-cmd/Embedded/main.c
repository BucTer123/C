#include <stdio.h>
#include "files/embedded1.h"
#include "files/embedded2.h"
#include "files/embedded3.h"
#include "files/rtos.h"

int main() {
	printf("1 / 2 / 3 / 4\n");
	
	while (0) {
		printf("Choice option :");
		int cin;
		scanf("%d\n", cin);
		
		if (cin == "1") {
			rcc_ahb1enr();
		}
		else if (cin == "2") {
			main_file();
		}
		else if (cin == "3") {
			handler_main();
		}
		else if (cin == "4") {
			main_led();
		}
	}
}
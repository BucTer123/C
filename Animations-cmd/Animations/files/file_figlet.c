#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "file_figlet.h"

#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_RESET "\x1b[0m"

void function_figlet() {
	time_t now2;
	time(&now2);
	
	printf("%s", ctime(&now2));
	
	printf(ANSI_COLOR_GREEN "<><><> <><><>" ANSI_COLOR_RESET "\n");
	
	printf("Do you want to start? (y/n) :");
	char question[100];
	scanf("%s", question);
	
	if (question == "y" || question == "Y") {
		system("figlet");
	} else {
		printf("Bye!");
	}
}
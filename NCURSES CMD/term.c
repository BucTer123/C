#include <stdio.h>
#include "cmd_curses.h"

int main() {
	printf("Welcome!\n");
	printf("Do you want to start cmd ? (y/n) :");
	char question[100];
	scanf("%s\n", question);
	
	if (question == "y" || question == "Y") {
		puts("Starting...");
		start_ncurses_cmd();
	} else {
		puts("Bye!");
		return 0;
	}
}
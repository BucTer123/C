#include <stdio.h>
#inlcude <time.h>
#include "file_color_text.h"

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

void function_colortext() {
	printf("Write color :");
	char col[100];
	scanf("%s", col);
	
	printf("Write text :");
	char txt[100];
	scanf("%s", txt);
	
	if (col == "what?") {
		printf("1 => RED\n");
		printf("2 => GREEN\n");
		printf("3 => YELLOW\n");
		printf("4 => BLUE\n");
		printf("5 => MAGENTA\n");
		printf("6 => CYAN\n");
	}
	
	else if (col == "RED") {
		printf(ANSI_COLOR_RED txt.c_str() ANSI_COLOR_RESET);
	}
	
	else if (col == "GREEN") {
		printf(ANSI_COLOR_GREEN txt.c_str() ANSI_COLOR_RESET);
	}
	
	else if (col == "YELLOW") {
		printf(ANSI_COLOR_YELLOW txt.c_str() ANSI_COLOR_RESET);
	}
	
	else if (col == "BLUE") {
		printf(ANSI_COLOR_BLUE txt.c_str() ANSI_COLOR_RESET);
	}
	
	else if (col == "MAGENTA") {
		printf(ANSI_COLOR_MAGENTA txt.c_str() ANSI_COLOR_RESET);
	}
	
	else if (col == "CYAN") {
		printf(ANSI_COLOR_CYAN txt.c_str() ANSI_COLOR_RESET);
	}
}
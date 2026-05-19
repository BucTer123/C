#include <stdio.h>
#include <time.h>
#include "files/file_figlet.h"
#include "files/file_ncurses.h"
#include "files/file_color_text.h"

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main(int argc, char** argv) {
	time_t now;
	time(&now);
	
	printf("%s", ctime(&now));
	
	printf(ANSI_COLOR_CYAN "Welcome!" ANSI_COLOR_RESET "\n");
	
	printf(ANSI_COLOR_BLUE "> " ANSI_COLOR_RESET);
	char cmd[100];
	scanf("%s", cmd);
	
	if (cmd == "help") {
		printf(ANSI_COLOR_YELLOW "List of commands :" ANSI_COLOR_RESET "\n");
		printf(ANSI_COLOR_YELLOW "1 => help" ANSI_COLOR_RESET "\n");
		printf(ANSI_COLOR_YELLOW "2 => exit" ANSI_COLOR_RESET "\n");
		printf(ANSI_COLOR_YELLOW "3 => fglt" ANSI_COLOR_RESET "\n");
		printf(ANSI_COLOR_YELLOW "4 => anim" ANSI_COLOR_RESET "\n");
		printf(ANSI_COLOR_YELLOW "5 => color" ANSI_COLOR_RESET "\n");
	}
	
	else if (cmd == "exit");
	
	else if (cmd == "fglt") {
		function_figlet();
	}
	
	else if (cmd == "anim") {
		function_animation();
	}
	
	else if (cmd == "color") {
		function_colortext();
	}
	
	return 0;
}
#include <stdio.h>
#include <string.h>
#include <ncurses.h>
#include <unistd.h>
#include <time.h>
#include "cmd_curses.h"

void start_ncurses_cmd() {
	initscr();
	echo();
	
	mvprintw(10, 10,"Welcome!");
	int butt = getch();
	
	else if (butt == 't') {
		time_t now;
		time(&now);
		mvprintw(10, 12, ctime(&now));
		clear();
	}
	else if (butt == '\n') {
		mvprintw(10, 15, "Bye!");
		clear();
		return 0;
	}
	
	getch();
	endwin();
	return 0;
}
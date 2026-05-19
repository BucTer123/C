#include <ncurses.h>
#include <stdio.h>
#include <unistd.h>
#include "file_ncurses.h"

void function_code_animation() {
	initscr();
	noecho();
	curs_set(FALSE);
	
	int MaxX, MaxY;
	int z = 0;
	
	for (z = 0; z < MaxX; z++) {
		clear();
		getmaxyx(stdscr, MaxY, MaxX);
		mvprintw(MaxY / 2, z % MaxX, inp.c_str());
		refresh();
		usleep(500);
	}
	
	endwin();
}

void function_animation() {
	intscr();
	echo();
	
	mvprintw(10, 10, "Write text for animation :");
	char inp[100];
	getstr(inp);
	
	if (inp == "") {
		clear();
		mvprintw(10, 10, "ERROR!: Write text!");
	} else {
		clear();
		function_code_animation();
	}
	
	endwin();
}
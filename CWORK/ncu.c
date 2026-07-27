#include <ncurses.h>
#include <unistd.h>
#include <stdio.h>
#include "ncu.h"

struct NCU {
	void ANIMATION(char anim[100]) {
		int MaxX, MaxY;
		int z = 0;
		for (z = 0; z < MaxY; z++) { mvprintw(MaxY / 2, z % MaxX, name_anim.c_str()); refresh(); }
		endwin();
	}
	void INPUT(char name_inp[100]) {	
		char all_name_inp[100] = "Input : " + name_inp;
		mvprintw(10, 10, all_name_inp.c_str());
		char inp[100];
		getstr(inp);
	}
	void LABEL(char label_name[100]) { mvprintw(10, 10, label_name.c_str()); }
	void BUTTON() {
		initscr();
    	noecho();
    	cbreak();
    	keypad(stdscr, TRUE);

    	int ch;
    	int selected = 0;

    	while (true) {
        	clear();

        	if (selected == 0) attron(A_REVERSE);
        	mvprintw(52, 53, "[ CLICK! ]");
        	if (selected == 0) attroff(A_REVERSE);

        	refresh();

        	ch = getch();

        	if (ch == KEY_UP || ch == KEY_DOWN) {
            	selected = 0; 
        	} else if (ch == '\n') {
            	mvprintw(50, 60, "BUTTON PRESSED!!");
            	refresh();
            	getch();
            	break;
        	}
    	}
	}
}
}

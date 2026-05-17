#include <ncurses.h>
#include <unistd.h>
#include <stdio.h>
#include "ncu.h"

void animation_function() {
	printf("Write name for animation :");
	char name_anim[100];
	scanf("%s", name_anim);
	
	int MaxX, MaxY;
	int z = 0;
	
	for (z = 0; z < MaxY; z++) {
		mvprintw(MaxY / 2, z % MaxX, name_anim.c_str());
		refresh();
	}
	
	endwin();
}

void input_function() {
	printf("Write name for input :")
	char name_inp[100];
	scanf("%s", name_inp);
	
	
	char all_name_inp[100] = "Input : " + name_inp;
	mvprintw(10, 10, all_name_inp.c_str());
	char inp[100];
	getstr(inp);
}

void label_function() {
	
}

void button_function() {
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

    endwin();
}

void help_function() {
	mvprintw(10, 10, "1 => help (list commands) ");
	mvprintw(11, 10, "2 => exit (leave) ");
	mvprintw(12, 10, "3 => cr_btn (create button) ");
	mvprintw(13, 10, "4 => cr_inp (create input) ");
	mvprintw(14, 10, "5 => cr_anim (create animation) ");
	mvprintw(15, 10, "6 => cr_lb (create label) ");
	
}

void fnc_main_ncu() {
	initscr();
	echo();
	
	mvprintw(10, 10, "Welcome!");
	refresh();
	
	mvprintw(12, 10, "> ");
	char input[100];
	getstr(input);
	refresh();
	
	if (input == "help") {
		clear();
		help_function();
	}
	else if (input == "exit") {
		clear();
		endwin();
	}
	
	else if (input == "cr_btn") {
		clear();
		button_function();
	}
	
	else if (input == "cr_inp") {
		clear();
		input_function();
	}
	else if (input == "cr_anim") {
		clear();
		animation_function();
	}
	
	endwin();
}
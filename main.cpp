#include <iostream>
#include <cstdio>
#include <ncurses.h>

int main()
{
    int height, width, y0, x0;
    initscr();
    getmaxyx(stdscr, height, width);
    WINDOW *win = newwin(height, width, 100, 100);

    cbreak();
    // noecho();
    keypad(stdscr, TRUE);
    while(getch() != 'q') {
	continue;	
    }

    endwin();
    return 0;
}

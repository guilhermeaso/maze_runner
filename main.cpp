#include <iostream>
#include <cstdio>
#include <ncurses.h>

int main()
{
    int ch = 0, height = 20, width = 30;
    int y = 0, x = 0, py = 1, px = 1;
    char c = '*';

    initscr();
    WINDOW *win = newwin(height, width, y, x);
    refresh();

    cbreak();
    noecho();
    keypad(stdscr, TRUE);

    while((ch != 'q') && (ch != 'Q')){
	box(win, (int)c, (int)c); 
	wrefresh(win);
	ch = getch();

	switch(ch) {
	    case KEY_UP:
			py -= 1;
			mvwaddch(win, py, px, 'P');
			break;
	    case KEY_DOWN:
			py += 1;
			mvwaddch(win, py, px, 'P');
			break;
	    case KEY_RIGHT:
			px += 1;
			mvwaddch(win, py, px, 'P');
			break;
	    case KEY_LEFT:
			px -= 1;
			mvwaddch(win, py, px, 'P');
			break;
	    default:
			break;
	}

	endwin();
    return 0;
}

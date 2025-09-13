#include <ncurses.h>

void setup();
void finish();

int main() {
	setup();

	const int height = 10;
	const int width = 10;


	printw("Press any to exit");
	refresh();

	WINDOW *win = newwin(height, width, 3, 3);
	box(win, 0, 0);

	wrefresh(win);

	while ((char ch = getch()) != KEY_F(1)) {
		switch ch {
			case KEY_LEFT:
				destroy_win(win);


		}

	}




	getch();


	finish();
	return 0;
}










void destroy_win(WINDOW *win) {
	box(win, ' ', ' ');
	wrefresh(win);
	delwin(win);

}





void setup() {
	initscr();
	raw();
	keypad(stdscr, TRUE);
	noecho();
}

void finish() {
	refresh();
	endwin();
}

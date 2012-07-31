#include <ncurses.h>
#include "player.h"
#include "board.h"

int main()
{
	initscr();
	cbreak();
	noecho();
	keypad(stdscr, TRUE);
	curs_set(0);
	refresh();

	int height = 10;
	int width = COLS - 1;
	int posx = 0;
	int posy = height - 4;

	Board board(height, width);
	Player player(posy, posx, height, width);

	player.printPlayer(board.win);
	board.refresh();

	for(;;){
		board.reset();
		player.move(board.win, getch());
		board.refresh();
	}

	return 0;
}
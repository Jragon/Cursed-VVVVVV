#ifndef BOARD
#define BOARD
#include <ncurses.h>

class Board
{
public:
	WINDOW *win;

	Board(int height, int width);
	~Board();

	void reset();
	void refresh();
};

#endif
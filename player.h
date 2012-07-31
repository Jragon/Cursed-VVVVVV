#ifndef PLAYER
#define PLAYER

#include <ncurses.h>

class Player
{
private:
	int posx;
	int posy;
	int height;
	int width;

	
	void flPrintPlayer(WINDOW *win);
	void clPrintPlayer(WINDOW *win);

public:
	Player(WINDOW *win, int startPosy, int startPosx, int winHeight, int winWidth);
	~Player();

	void printPlayer(WINDOW *win);
	void move(WINDOW *win, int move);
};

#endif
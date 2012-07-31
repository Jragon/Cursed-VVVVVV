#include "player.h"

Player::Player(WINDOW *win, int startPosy, int startPosx, int winHeight, int winWidth){
	posx = startPosx;
	posy = startPosy;
	height = winHeight;
	width = winWidth;
}

Player::~Player(){}

void Player::printPlayer(WINDOW *win){
	if (posy == (height - 4))
		flPrintPlayer(win);
	else
		clPrintPlayer(win);
}

void Player::flPrintPlayer(WINDOW *win){
	int localPosy = posy;
	int localPosx = posx;
	mvwaddstr(win, localPosy, localPosx, " 0");
	mvwaddstr(win, localPosy += 1, localPosx, "-|-");
	mvwaddstr(win, localPosy += 1, localPosx, "/ \\");
}

void Player::clPrintPlayer(WINDOW *win){
	int localPosy = posy;
	int localPosx = posx;

	mvwaddstr(win, localPosy, localPosx, "\\ /");
	mvwaddstr(win, localPosy += 1, localPosx, "-|-");
	mvwaddstr(win, localPosy += 1, localPosx, " 0");
}

void Player::move(WINDOW *win, int move){
	switch(move){
		case KEY_LEFT:
			if((posx - 1) != -1){
				posx--;
				printPlayer(win);
			}else{
				posx = width - 3;
				printPlayer(win);
			}
		case KEY_RIGHT:
			if((posx + 1) != width - 2){
				posx++;
				printPlayer(win);
			}else{
				posx = 0;
				printPlayer(win);
			}
		case ' ':
			if (posy == (height - 4)){
				posy = 1;
				printPlayer(win);
			}else{
				posy = height - 4;
				printPlayer(win);
			}
	}
}

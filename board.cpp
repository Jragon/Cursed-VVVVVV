#include "board.h"

Board::Board(int height, int width){
	win = newwin(height, width, 0, 0);
	wborder(win, ' ', ' ', '#', '#', '#', '#', '#', '#'); 
}

Board::~Board(){}

void Board::reset(){
	werase(win);
	wborder(win, ' ', ' ', '#', '#', '#', '#', '#', '#'); 
}

void Board::refresh(){
	wrefresh(win);
}
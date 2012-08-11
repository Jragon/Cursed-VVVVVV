#ifndef ENEMY
#define ENEMY

#include <stdlib.h>
#include <time.h>

class Enemy
{
private:
	int mobs[5][2], height, width;
	
public:
	Enemy(int height, int width);
	~Enemy();

	bool evaluate(WINDOW *win, int posy, int posx);
	void populate(WINDOW *win);
};

#endif
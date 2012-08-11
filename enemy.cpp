Enemy::Enemy(int height2, int width2){
	srand(time(NULL))
	int height = height2;
	int width = width2;
}

Enemy::~Enemy(){}

bool Enemy::evaluate(WINDOW *win, int posy, int posx){
	for(i = 1; i <= 5; i++){
		if(posy == mobs[i][1] && posx == mobs[i][2])
			return false;
	}
	return true;
}

void Enemy::populate(WINDOW *win){
	for(i = 1; i <= 5; i++){
		// Set the Y value (mobs[i][1])
		mobs[i][1] = rand() % height + 1;
		// Set the X value (mobs[i][2])
		mobs[i][2] = rand() % width + 1;
		// Place the mobs on the screen
		mvwaddch(win, mobs[i][1], mobs[i][2], '@');
	}
}
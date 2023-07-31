#ifndef GAMEWON_H_INCLUDED
#define GAMEWON_H_INCLUDED

# include "enemy.h"

void gameFinished()
{
	if(enemyState == 5 && arceus.bLife == 0)
		iShowBMP(0,0,"image\\gamefinished.bmp");
}

#endif
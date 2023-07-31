#ifndef POKEBALL_H_INCLUDED
#define POKEBALL_H_INCLUDED

# include "enemy.h"


struct ball
{
	int bx , by ;
}pokeBall;

char pokeBallPics[4][35] = {"image\\pokeball\\01.bmp","image\\pokeball\\02.bmp","image\\pokeball\\03.bmp","image\\pokeball\\04.bmp"};
int ballIndex = 0 ;

void showPokeball()
{
	//if(enemyState != 5)
		iShowBMP2(pokeBall.bx, pokeBall.by, pokeBallPics[ballIndex], 255);
}

void ballPositionChange()
{
	if(mode == 0 && flag == 1)
	{
		pokeBall.bx -= 30;
		ballIndex ++ ;
		if(ballIndex == 4)
			ballIndex = 0 ;
		if(pokeBall.bx <= 0)
			pokeBall.bx = 1266 ;
	}
}

#endif
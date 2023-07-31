#ifndef INITIALVALUES_H_INCLUDED
#define INITIALVALUES_H_INCLUDED

# include "newgame.h"


//all of the values' initialization
void initialization() 
{
	pika.move_x = 0 ;
	pika.move_y = 60 ;
	
	pokeBall.bx = 1266;
	pokeBall.by = 300 ;

	charmander.cx = 1366 ;
	charmander.cy = 620 ;

	arbock.cx = 1366 ;
	arbock.cy = 75 ;

	lotusica.cx = 1366 ;
	lotusica.cy = 70 ;

	mew.cx = 1366 ;
	mew.cy = 65 ;

	weezing.cx = 1366 ;
	weezing.cy = 80 ;

	fireBall.cx = charmander.cx - 90 ;
	fireBall.cy = charmander.cy - 80 ;

	lifeXCo = 1100 ;
	lifeYCo = 695 ;

	arceus.xCo = 1260 ;
	arceus.yCo = 75 ;

	bossPower.xCo = arceus.xCo - 140 ;
	bossPower.yCo = arceus.yCo + 60 ;

	pikachu.powerX = pika.move_x + 135 ;
	pikachu.powerY = pika.move_y + 100 ;

	arceus.bLife = 100 ;
}


#endif
#ifndef COLLISION_H_INCLUDED
#define COLLISION_H_INCLUDED

# include "enemy.h"
# include "pokeball.h"
# include "pikamove.h"
# include "pikajump.h"
# include "life.h"
# include "scoreboard.h"

# include "pikapower.h"

void ballCollisionCheck()
{
	
	if(jump)
	{
		if(pika.move_x + 100 >= pokeBall.bx && pika.move_x + 40 <= pokeBall.bx + 60 && pika.move_y + 250 >= pokeBall.by && pika.move_y <= pokeBall.by + 60)
		{
			pokeBall.bx = 1266;
			pokeBall.by = 300 ;
			score += 10 ;
		}
	}
}

void mewCollisionCheck()
{
	if((!jump && !stand) || stand)
	{
		if(pika.move_x + 160 >= mew.cx && pika.move_x <= mew.cx + 115 && pika.move_y + 300 >= mew.cy && pika.move_y <= mew.cy + 85)
		{
			iShowBMP2(mew.cx , mew.cy + 20 , "image\\explosion.bmp", 0);
			life -- ;
			mew.cx = 1366 ;
			mew.cy = 65 ;
		}
	}
}

void arbockCollisionCheck()
{
	if((!jump && !stand) || stand)
	{
		if(pika.move_x + 160 >= arbock.cx && pika.move_x <= arbock.cx + 85 && pika.move_y + 300 >= arbock.cy && pika.move_y <= arbock.cy + 85)
		{
			iShowBMP2(arbock.cx , arbock.cy + 20 , "image\\explosion.bmp", 0);
			life -- ;
			arbock.cx = 1366 ;
			arbock.cy = 95 ;
		}
	}
}

void fireBallCollisionCheck()
{
	if((!jump && !stand) || (stand || jump))
	{
		if(pika.move_x + 150 >= fireBall.cx && pika.move_x <= fireBall.cx + 25 && pika.move_y + 85 >= fireBall.cy + 30 && pika.move_y <= fireBall.cy + 5)
		{
			iShowBMP2(fireBall.cx , fireBall.cy + 20 , "image\\explosion.bmp", 0);
			life -- ;
			fireBall.cx = charmander.cx - 90 ;
			fireBall.cy = charmander.cy - 80 ;
		}
	}
}

void lotusicaCollisionCheck()
{
	if((!jump && !stand) || stand)
	{
		if(pika.move_x + 160 >= lotusica.cx && pika.move_x <= lotusica.cx + 85 && pika.move_y + 300 >= lotusica.cy && pika.move_y <= lotusica.cy + 85)
		{
			iShowBMP2(lotusica.cx , lotusica.cy + 20 , "image\\explosion.bmp", 0);
			life -- ;
			lotusica.cx = 1366 ;
			lotusica.cy = 70 ;
		}
	}
}


void weezingCollisionCheck()
{
	if((!jump && !stand) || stand)
	{
		if(pika.move_x + 160 >= weezing.cx && pika.move_x <= weezing.cx + 85 && pika.move_y + 300 >= weezing.cy && pika.move_y <= weezing.cy + 85)
		{
			iShowBMP2(weezing.cx , weezing.cy + 20 , "image\\explosion.bmp", 0);
			life -- ;
			weezing.cx = 1366 ;
			weezing.cy = 75 ;
		}
	}
}

void bossPowerCollisionCheck()
{
	if((!jump && !stand) || stand)
	{
		if(bossPower.xCo + 130 >= pika.move_x  && bossPower.xCo + 30 <= pika.move_x + 80 && bossPower.yCo + 120 >= pika.move_y + 20 && bossPower.yCo <= pika.move_y + 50)
		{
			iShowBMP2(bossPower.xCo , bossPower.yCo + 20 , "image\\explosion.bmp", 0);
			life -- ;
			bossPower.xCo = arceus.xCo - 140 ;
			bossPower.yCo = arceus.yCo + 60 ;
		}
	}
}

void pikaPowerCollisionWithBoss()
{
	if(!jump && !stand && pikaPowerState == true)
	{
		if(pikachu.powerX + 200 >= arceus.xCo + 40 && pikachu.powerX + 200 <= arceus.xCo + 100 && pikachu.powerY + 65 >= arceus.yCo + 30 && pikachu.powerY <= arceus.yCo + 80)
		{
			iShowBMP2(mew.cx , mew.cy + 20 , "image\\explosion.bmp", 0);
			arceus.bLife -= 10 ;
			pikachu.powerX = pika.move_x + 135 ;
			pikachu.powerY = pika.move_y + 15 ;
		}
	}
}

#endif
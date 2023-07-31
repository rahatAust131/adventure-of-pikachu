#ifndef NEWGAME_H_INCLUDED
#define NEWGAME_H_INCLUDED

int flag ;
# include "collision.h"
# include "enemy.h"
# include "frontpage.h"
# include "gameplaybackground.h"
# include "menupage.h"
# include "pikajump.h"
# include "pikamove.h"
# include "pokeball.h"
# include "pikapower.h"
# include "gamewon.h"


void newGame()
{
	if(flag == 0)
	{
		inputPlayerName();
	}

    else if(flag == 1)
    {
        setBackground();
        showBackground();
        showPokeball();
		ballPositionChange();
        ballCollisionCheck();
		showCharmander();
		showFireBall();
		fireBallCollisionCheck();
		showMew();
		mewPositionChange();
		mewCollisionCheck();
		showWeezing();
		weezingPositionChange();
		weezingCollisionCheck();
		showArbock();
		arbockPositionChange();
		arbockCollisionCheck();
		showLotusica();
		lotusicaPositionChange();
		lotusicaCollisionCheck();
		//showBoss();
		//showBossPower();
		//bossPowerPositionChange();
		//bossPowerCollisionCheck();
		//showPikaPower();
		//pikaPowerCollisionWithBoss();
		gameFinished();

		if(score >= 0 && score <= 100)
		{
			enemyState = 1 ;
		}

		else if(score >= 110 && score <= 200)
		{
			enemyState = 2 ;
		}

		else if(score >= 210 && score <= 300)
		{
			enemyState = 3 ;
		}
		
		else if(score >= 310 && score <= 400)
		{
			enemyState = 4 ;
		}

		else 
		{
			enemyState = 5 ;
		}

		showScoreInGame();
		
        showLife();
		
		//iText(415, 735, "Press p to pause the game", GLUT_BITMAP_9_BY_15);

        if(jump)
        {
            setJump();
			pikaJump();
        }

        else
        {
            if(!stand)
            {
                pikaStand();
            }
            else
            {
                iShowBMP2(pika.move_x, pika.move_y, "image\\stand1.bmp",0);
            }
        }
    }
    else if(flag == 2)
    {
        iShowBMP(0, 0, "image\\pause2.bmp");
    }
	
}


#endif

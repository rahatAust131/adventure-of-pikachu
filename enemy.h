#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED

/*this is a structure named 'enemy' where different type of enemies are declared
here cx & cy are their x co-Ordinates & y co-Ordinates respectively
the structure is mainly having these enemies' position
*/
struct enemy
{
    int cx, cy;

} charmander, arbock, weezing, lotusica, mew, fireBall;


/*this is a structure named 'boss' where boss name 'arceus' & bossPower are declared
here xCo & yCo are their x co-Ordinates & y co-Ordinates respectively
the structure is mainly having boss & bossPower' position
And bLife refers to boss life
*/
struct boss
{
	int xCo, yCo;
	int bLife;

}arceus, bossPower;


//these are enemies pics declaration

char charmanderPics[5][35] = {"image\\charmander\\001.bmp","image\\charmander\\002.bmp","image\\charmander\\003.bmp","image\\charmander\\004.bmp"};

char fireBallPics[5][40] = {"image\\fireball\\01.bmp","image\\fireball\\02.bmp","image\\fireball\\03.bmp","image\\fireball\\04.bmp"};

char arbockPics[3][35] = {"image\\arbock\\001flip.bmp","image\\arbock\\002flip.bmp"};

char weezingPics[3][45] = {"image\\weezing\\01.bmp","image\\weezing\\03.bmp","image\\weezing\\03.bmp"};

char lotusicaPics[8][45] = {"image\\lotusica\\0001.bmp","image\\lotusica\\0002.bmp","image\\lotusica\\0003.bmp","image\\lotusica\\0004.bmp","image\\lotusica\\0005.bmp","image\\lotusica\\0006.bmp","image\\lotusica\\0007.bmp","image\\lotusica\\0008.bmp"};

char mewPics[3][45] = {"image\\mew\\01.bmp","image\\mew\\02.bmp","image\\mew\\03.bmp"};

char arceusPics[8][40] = {"image\\arceus\\0001.bmp","image\\arceus\\0002.bmp","image\\arceus\\0003.bmp","image\\arceus\\0004.bmp","image\\arceus\\0005.bmp","image\\arceus\\0006.bmp","image\\arceus\\0007.bmp","image\\arceus\\0008.bmp"};

char arceusPowerPics[4][35] = {"image\\bosspower\\0001.bmp","image\\bosspower\\0002.bmp","image\\bosspower\\0003.bmp","image\\bosspower\\0004.bmp"};

int enemyState ;			/*enemyState is mainly state of different enemies
							if 1, it refers to mew
							if 2, it refers to arbock
							if 3, it refers to weezing
							if 4, it refers to lotusica
							if 5, it refers to boss (arceus)
							*/

int picIndex1 ;			//refers to charmander pics array
int picIndex2 ;			//refers to mew pics array
int picIndex3 ;			//refers to arbock pics array
int picIndex4 ;			//refers to weezing pics array
int picIndex5 ;			//refers to lotusica pics array
int picIndex6 ;			//refers to fireball pics array

int bossIndex1 ;		//means bossPics index
int bossPowerIndex1 ;	//means boss power pics index 

int t2Index, t3Index, t4Index ;		//useless till now, if used, comment will be updated :p

void showCharmander()
{
	/*when this function is called, there shows a dragon on top of the game screen*/
	
	iShowBMP2(charmander.cx, charmander.cy, charmanderPics[picIndex1], 255);
}

void charmanderPositionChange()
{
    if(mode == 0 && flag == 1)
    {
		picIndex1 ++ ;
		charmander.cx -= 25 ;
		if(picIndex1 == 4)
			picIndex1 = 0 ;
        
        if(charmander.cx <= 0)
            charmander.cx = 1366 ;
    }
}

void showFireBall()
{
	/*when this function is called, there shows a fireball */
	iShowBMP2(fireBall.cx, fireBall.cy, fireBallPics[picIndex6], 255);
}



/*this function changes the position of 
fireball which moves from up to down
which falls from the mouth of the dragon
*/
void fireBallPositionChange()
{
    if(mode == 0 && flag == 1)
    {
		picIndex6 ++ ;
		fireBall.cy -= 45 ;
		fireBall.cx -= 5 ;
		if(picIndex6 == 4)
			picIndex6 = 0 ;
		if(fireBall.cy <= 0 || fireBall.cx <= 0)
		{
			fireBall.cx = charmander.cx - 100 ;
			fireBall.cy = charmander.cy - 80 ;
		}
	}
}

void showMew()
{
	/*this function shows an enemy 
	whose name is mew*/
	if(enemyState == 1)
		iShowBMP2(mew.cx, mew.cy, mewPics[picIndex2], 255);
}

void mewPositionChange()
{
	/*this function changes the position of mew
	which shows that mew is moving from right to left*/
    if(mode == 0 && flag == 1 && enemyState == 1)
    {
		picIndex2 ++ ;
		mew.cx -= 15 ;
		if(picIndex2 == 3)
			picIndex2 = 0 ;
        
        if(mew.cx <= 0)
            mew.cx = 1366 ;
    }
}

void showArbock()
{
	/*this function shows an enemy 
	whose name is arbock*/

	if(enemyState == 2)
		iShowBMP2(arbock.cx, arbock.cy, arbockPics[picIndex3], 255);
}

void arbockPositionChange()
{
	/*this function changes the position of arbock
	which shows that arbock is moving from right to left*/

    if(mode == 0 && flag == 1 && enemyState == 2)
    {
		picIndex3 ++ ;
		arbock.cx -= 15 ;
		if(picIndex3 == 2)
			picIndex3 = 0 ;
        
        if(arbock.cx <= 0)
            arbock.cx = 1366 ;
    }
}

void showWeezing()
{	
	/*this function shows an enemy 
	whose name is weezing*/
	if(enemyState == 3)
		iShowBMP2(weezing.cx, weezing.cy, weezingPics[picIndex4], 255);
}

void weezingPositionChange()
{
	/*this function changes the position of weezing
	which shows that weezing is moving from right to left*/

    if(mode == 0 && flag == 1 && enemyState == 3)
    {
		picIndex4 ++ ;
		weezing.cx -= 15 ;
		if(picIndex4 == 3)
			picIndex4 = 0 ;
        
        if(weezing.cx <= 0)
            weezing.cx = 1366 ;
    }
}


void showLotusica()
{
	/*this function shows an enemy 
	whose name is lotusica*/

	if(enemyState == 4)
		iShowBMP2(lotusica.cx, lotusica.cy, lotusicaPics[picIndex5], 255);
}

void lotusicaPositionChange()
{
	/*this function changes the position of lotusica
	which shows that lotusica is moving from right to left*/

    if(mode == 0 && flag == 1 && enemyState == 4)
    {
		picIndex5 ++ ;
		lotusica.cx -= 15 ;
		if(picIndex5 == 8)
			picIndex5 = 0 ;
        
        if(lotusica.cx <= 0)
            lotusica.cx = 1366 ;
    }
}

void showBoss()
{
	if(enemyState == 5)
	{
		iShowBMP2(arceus.xCo, arceus.yCo, arceusPics[bossIndex1], 255);
	}
}

void bossPositionChange()
{
	if(mode == 0 && flag == 1 && enemyState == 5)
    {
		bossIndex1 ++ ;
		arceus.xCo -= 5 ;
		if(bossIndex1 == 8)
			bossIndex1 = 0 ;
		if(arceus.xCo <= 1060)
			arceus.xCo += 75 ;
    }
}

void showBossPower()
{
	if(enemyState == 5)
		iShowBMP2(bossPower.xCo, bossPower.yCo, arceusPowerPics[bossPowerIndex1], 0);
}

void bossPowerPositionChange()
{
	if(mode == 0 && flag == 1 && enemyState == 5)
	{
		bossPower.xCo -= 30 ;
		bossPowerIndex1 ++ ;
		if(bossPowerIndex1 == 4)
			bossPowerIndex1 = 0 ;
		if(bossPower.xCo <= 0)
		{
			bossPower.xCo = arceus.xCo - 140 ;
			bossPower.yCo = arceus.yCo + 60 ;
		}
	}
}


#endif

#ifndef PIKAPOWER_H_INCLUDED
#define PIKAPOWER_H_INCLUDED

int powerMode = 0 ;
bool pikaPowerState = false ;

struct power
{
	int powerX, powerY ;
}pikachu;

char pikaPowerPics[2][25] = {"image\\power\\02.bmp"};

void showPikaPower()
{
	if(enemyState == 5 && pikaPowerState == true)
	{
		//iShowBMP2(pika.move_x, pika.move_y, "image\\power\\01.bmp", 255);
		iShowBMP2(pikachu.powerX , pikachu.powerY, pikaPowerPics[0], 255);
	}
}

void pikaPowerChange()
{
	if(mode == 0 && enemyState == 5 && pikaPowerState == true)
		pikachu.powerX += 35 ;
	if(pikachu.powerX >= 1355)
	{
		pikachu.powerX = pika.move_x + 135 ;
		pikachu.powerY = pika.move_y + 100 ;

	}
	pikaPowerState = false ;
	
}

#endif
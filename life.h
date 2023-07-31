
#ifndef LIFE_H_INCLUDED
#define LIFE_H_INCLUDED

int life = 5 ;
int lifeXCo, lifeYCo ;
char lifePics[5][35] = {"image\\life\\01.bmp","image\\life\\02.bmp","image\\life\\03.bmp","image\\life\\04.bmp","image\\life\\05.bmp"};

void showLife()
{
	if(life == 5)
	{
		iShowBMP2(lifeXCo, lifeYCo, lifePics[0], 255);
	}
	else if(life == 4)
	{
		iShowBMP2(lifeXCo, lifeYCo, lifePics[1], 255);

	}
	else if(life == 3)
	{
		iShowBMP2(lifeXCo, lifeYCo, lifePics[2], 255);
	}
	else if(life == 2)
	{
		iShowBMP2(lifeXCo, lifeYCo, lifePics[3], 255);
	}
	else if(life == 1)
	{
		iShowBMP2(lifeXCo, lifeYCo, lifePics[4], 255);
	}
	else mode = 8 ;
	
	
}


#endif
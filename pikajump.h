#ifndef PIKAJUMP_H_INCLUDED
#define PIKAJUMP_H_INCLUDED

# include "pikamove.h"

bool jump = false ;
bool jumpUp = false ;
int jumpLimit = 245 ;
int jumpCo = 0;
char jumpPics[2][45] = {"image\\jump\\01.bmp","image\\jump\\02.bmp"};

void setJump()
{
	if(jump)
	{
		if(jumpUp)
		{
			iShowBMP2(pika.move_x, pika.move_y + jumpCo, jumpPics[0], 255);
		}
		else 
		{	
			iShowBMP2(pika.move_x, pika.move_y + jumpCo, jumpPics[1], 255);
		}
	}
}

void pikaJump()
{
	if(jumpUp)
	{
		jumpCo += 25;
		if(jumpCo >= jumpLimit)
			jumpUp = false ;
	}
	else
	{
		jumpCo -= 25 ;
		if(jumpCo < 0)
		{
			jump = false ;
			jumpCo = 0 ;
		}
	}
}

#endif
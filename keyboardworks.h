#ifndef KEYBOARD_H_INCLUDED
#define KEYBOARD_H_INCLUDED

# include "pikapower.h"

char ch;


void allKey()
{
	if(flag == 1)
	{
		//to mute the music
		if(ch == 'm')
		{
			musicOn=false;
			PlaySound(0,0,0);
		}

		//to unmute the music
		else if(ch == 'u')
		{
			musicOn=true;
			PlaySound("music\\centre.wav", NULL, SND_LOOP | SND_ASYNC );
		}

		//to pause the game
		if(ch == 'p')
		{
			flag = 2 ;
		}

		//pikachu jump
		if(enemyState == 5)
		{
			if(ch == ' ')
				pikaPowerState = true ;
			else pikaPowerState = false ;
		}
	}

	if(ch == 'q')  //to quit the game
	{
		exit(0);
	}

	if(flag == 0 && mode == 0)
	{
		if(nameLength != 0 && ch == '\r')
		{
			flag = 1 ;
		}

		else if(ch == '\b')
		{
			
			if(nameLength>0)
			{
				nameLength--;
				name[nameLength] = '\0';               
			}
		}

		else 
		{
			if(mode == 0 && nameLength<15)
			{	
				name[nameLength] = ch;         
				nameLength++;
				//strcpy(str, name);
			}
		}

	}
}

void allSpecialKey()
{
	//pikachu run forward
	if(flag == 1 && ch == GLUT_KEY_RIGHT)
    {
		if(pika.move_x !=1360)
			pikaFrontMovement();
    }
	
	//pikachu run backward
	if(flag == 1 && pika.move_x !=0 && ch == GLUT_KEY_LEFT)
    {
		pikaBackMovement();
    }

	//pikachu jump
	else if(flag == 1 && ch == GLUT_KEY_UP)
	{
		if(!jump)
		{
			jump = true ;
			jumpUp = true ;
		}
	}

	//to save game
	if(flag == 1 && ch == GLUT_KEY_F5) 
	{
		savegame();
	}
}

#endif
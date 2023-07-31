#ifndef MOUSEWORKS_H_INCLUDED
#define MOUSEWORKS_H_INCLUDED

# include "buttonpage.h"

void leftButton()
{
	if(mode == -1)
	{
		//click on buttons & page transitions
		for(i=0; i<6; i++)
		{
			if(mx1 >= f1[i].x && mx1 <= f1[i].x + 165 && my1 >= f1[i].y && my1 <= f1[i].y + 55)
			{
				mode = i ;
			}
		}
	}
	printf("x = %d, y= %d\n",mx1, my1);  //to print x & y coordinate on the console
		
	//click on 'back' button
	if(mode != 8 && mode != 0 && mx1 >= 0 && mx1 <= 130 && my1 >= 665 && my1 <= 745)
	{
		for(i=0; i<6; i++)
            if(mode == i)
            {
                mode = i-(i+1);
            }
	}

	//click on 'settings' page
	if(mode == 1)
	{
		if(mx1 >= 815 && mx1 <= 960 && my1 >= 380 && my1 <= 510)
		{
			musicOn=true;
			PlaySound("music\\centre.wav", NULL, SND_LOOP | SND_ASYNC );
		}
		else if(mx1 >= 1105 && mx1 <= 1250 && my1 >= 380 && my1 <= 510)
		{
			musicOn=false;
			PlaySound(0,0,0);
		}
		
	}

	//click on 'resume' button
	if(flag == 2 && mx1 >= 120 && mx1 <= 410 && my1 >= 540 && my1 <=660)
	{
		mode = 0 ;
		flag = 1 ;
	}

	//click on 'menu' button
	if(flag == 2 && mx1 >= 120 && mx1 <= 415 && my1 >= 345 && my1 <=475)
	{	
		mode = -1 ;
		flag = 0 ;

	}

	//click on 'quit' button
	if(flag == 2 && mx1 >= 125 && mx1 <= 415 && my1 >= 145 && my1 <=285)
	{
		exit(0) ;
	}


	//
	if(mode == 8)
	{
		if(mx1 >= 375 && mx1 <= 575 && my1 >= 150 && my1 <= 170)
		{
			flag = 0 ;
			mode = -1 ;
			fileWrite();
			readFromFile();
			initialization();
			//strcpy("", name);
			life = 5 ;
			score = 0 ;
		}
	}

}

void pasMouse()
{
	if(mode == -1)
	{
		for(j=1; j<7; j++)
		{
			if(mposx >= f1[j].x && mposx <= f1[j].x + 160 && mposy >= f1[j].y && mposy <= f1[j].y + 65)
			{
				mouseMode = j ;	
			}
		}
	}
}

#endif
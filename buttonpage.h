#ifndef BUTTONPAGE_H_INCLUDED
#define BUTTONPAGE_H_INCLUDED

# include "frontpage.h"

int mposx, mposy ;
int mode = -1 ;
int i, j;		//declaration of loop variables 
int mx1, my1 ;
int mouseMode = 0 ;

struct button
{
    int x, y;
} f1[6];

void setButton()
{
	int buttonCo_y = 0;
    for(int i=0; i<6; i++)
    {
        ///for left side button placement
        if(i%2==0)
        {
            f1[i].x = 800;
            f1[i].y = 625-buttonCo_y ;
            buttonCo_y += 75 ;
        }

        ///for right side button placement
        else
        {
            f1[i].x = 910;
            f1[i].y = 625-buttonCo_y ;
            buttonCo_y += 75 ;
        }
    }
}

void showButton()
{
	iShowBMP(0, 0, menuPics[1]);

    //to show buttons
    for(int i=0 ; i<6; i++)
    {
        iShowBMP2(f1[i].x, f1[i].y, button_pics[i], 0);
    }

	for(j = 1; j < 7; j++)
	{
		if(mouseMode == j)
		{
			iShowBMP2(f1[j].x, f1[j].y, buttonChanged[j], 0);
		}
	}
	//iShowBMP2(800, 120, "image\\cont.bmp", 0);
}



#endif
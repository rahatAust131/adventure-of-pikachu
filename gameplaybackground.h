#ifndef BG_H_INCLUDED
#define BG_H_INCLUDED

# include "buttonpage.h"

struct bg
{
	int bgx;
	int bgy;
} bgp[6];

void setBackground()
{
	int ini=0;
	for(int i=0; i<6; i++)
	{
		bgp[i].bgx = ini;
		bgp[i].bgy=0;
		ini +=270;
	}
}

void showBackground()
{
	for(int i=0; i<6; i++)
	{
		iShowBMP(bgp[i].bgx, bgp[i].bgy, bgPics[i]);
	}
}



#endif
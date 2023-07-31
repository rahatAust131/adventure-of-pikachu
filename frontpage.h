#ifndef FRONTPAGE_H_INCLUDED
#define FRONTPAGE_H_INCLUDED

///initialization for menu pics

char menuPics[2][30]= {"image\\fp1.bmp", "image\\fp2.bmp"};
char button_pics[10][45] = {"image\\newgame.bmp", "image\\setting.bmp", "image\\instruction.bmp", "image\\credits.bmp", "image\\score.bmp","image\\quit.bmp"};
char buttonChanged[10][45] = {"image\\new2.bmp", "image\\setting1.bmp", "image\\instruction1.bmp", "image\\credits1.bmp", "image\\score1.bmp","image\\quit2.bmp"};
char bgPics[10][40] = {"image\\b1.bmp", "image\\b2.bmp", "image\\b1.bmp", "image\\b2.bmp", "image\\b1.bmp", "image\\b2.bmp"};

int a = 0 ;

void frontPage()
{
	iShowBMP(0, 0, menuPics[0]);
		
    iSetColor(36,60,219);

    iRectangle(900, 175, 300, 35); ///a rectangle

	iSetColor(36,60,219);
    iFilledRectangle(900, 175, 0 + a, 35); ///fill the normal rectangle

    iSetColor(0,0,0);
    iText(950, 140, "Loading...Please wait...", GLUT_BITMAP_TIMES_ROMAN_24) ;
}

#endif
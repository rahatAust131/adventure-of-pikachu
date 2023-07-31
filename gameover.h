#ifndef GAMEOVER_H_INCLUDED
#define GAMEOVER_H_INCLUDED

void gameOver()
{
	iPauseTimer(t2Index);
	iPauseTimer(t3Index);
	
	iShowBMP(0, 0, "image\\yourscore.bmp");
	iSetColor(255, 255, 255);
	iText(400, 400, "Your Score :", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(565, 400, scoreString, GLUT_BITMAP_TIMES_ROMAN_24);

	iSetColor(0, 255, 255);
	iRectangle(375, 95, 200, 20);
	iText(380, 100, "Go Back TO Main Menu", GLUT_BITMAP_9_BY_15);
}

#endif


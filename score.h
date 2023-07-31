#ifndef SCORE_H_INCLUDED
#define SCORE_H_INCLUDED

int score = 0 ;
char scoreString[20];

void showScoreInGame()
{
	iSetColor(255 , 255 , 0);
	iText(10, 745, "Score: ", GLUT_BITMAP_9_BY_15);

	itoa(score , scoreString , 10);
	iText(85, 745, scoreString, GLUT_BITMAP_9_BY_15);
}


#endif
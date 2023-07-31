#ifndef SCOREBOARD_H_INCLUDED
#define SCOREBOARD_H_INCLUDED

char name[100];						//used to store player name
int nameLength;                    //used to store name character in each array cell
char str[50];

//this function is called to take pName from user/player
void inputPlayerName()
{
	iClear();

	iShowBMP(0, 0, "image\\namebox1.bmp");

	iSetColor(0 , 255 , 255);
	iText(105, 465, name , GLUT_BITMAP_TIMES_ROMAN_24);
}


int score ;							/*declaration of score variable
									which stores the score in game*/

char scoreString[20];				/*declaration of scoreString variable
									this variable is used to store the integer score
									to string score (as iText doesn't support integer value)
									*/

//funtion to show the player score while the player is in game
void showScoreInGame()
{
	iSetColor(128 , 0 , 0);
	iText(15, 740, "Score: ", GLUT_BITMAP_TIMES_ROMAN_24);

	itoa(score , scoreString , 10);								/*itoa function converts integer to ASCII 
																here itoa function is converting score (int) to
																scoreString (string) for iText
																here the last parameter refers to decimal*/
	
	iText(85, 740, scoreString, GLUT_BITMAP_TIMES_ROMAN_24);
}


/*
a struct to store all the players' name and score..
*/

struct nameWithScore         
{
	char pName[40];
	int pScore;
	char scoreString[40];

}player[6];

void readFromFile()
{
	int i=0;
	FILE *fptr = fopen("sc.txt", "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
    }
    
	while (fscanf(fptr,"%s %s",player[i].pName, &player[i].scoreString) != EOF)
    {
		//printf ("%s %s\n",  player[i].pName, player[i].scoreString);
		i++;
    }
	//printf ("Hi\n\n");
    fclose(fptr);
}

char playerNumber[5][5] = {"1st","2nd","3rd","4th","5th"};

void showScore()
{
	iShowBMP(0 , 0 , "image\\scoreboard1.bmp");
	iSetColor(0, 255, 255);
	iText(745, 545, "Name", GLUT_BITMAP_TIMES_ROMAN_24);
	iText(865, 545, "Score", GLUT_BITMAP_TIMES_ROMAN_24);
	
	for(int i = 0, j = 500 ; i < 5 ; i++ , j -= 50)
	{
		iSetColor(255, 255, 0);
		iText(665, j , playerNumber[i], GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(243, 240, 168);
		iText(745, j , player[i].pName, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(865, j , player[i].scoreString, GLUT_BITMAP_TIMES_ROMAN_24);
	}
}


#endif
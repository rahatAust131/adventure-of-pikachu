#ifndef GAMEMODE_H_INCLUDED
#define GAMEMODE_H_INCLUDED

# include "frontpage.h"
# include "menupage.h"
# include "newgame.h"
# include "setting.h"
# include "instruction.h"
# include "credits.h"
# include "scoreboard.h"
# include "gameover.h"

struct FileWorks
{
	char name[30] ;
	int score ;
};
FileWorks player2[6];

void fileWrite()
{	
	int i=0;
	FILE *fptr = fopen("sc.txt", "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
    }
    
	while (fscanf(fptr,"%s %d",&player2[i].name,&player2[i].score) != EOF)
    {
		//printf ("%s %d\n\n",  player2[i].name, player2[i].score);
		i++;
    }
	strcpy(player2[i].name, name);
	player2[i].score = score;
	//printf ("%d\n\n",score);
    fclose(fptr);

	FileWorks temp;
	for(int i=0 ; i <= 4 ; i++)
	{
		for(int j = i+1 ; j <= 5 ; j++)
		{
			if(player2[i].score<player2[j].score)
			{
				temp=player2[i];
				player2[i]=player2[j];
				player2[j]=temp;
			}
		}
	}
	
	FILE *fp = fopen("sc.txt", "w");
	for(int i = 0 ; i < 5 ; i++)
	{
		fprintf(fp, "%s %d\n",player2[i].name,player2[i].score);
	}
	nameLength=0;
	player2[5].name[0]='\0';
	player2[5].score = 0;
    fclose(fp);

}
void savegame(){
	FILE *f=fopen("save.txt","w");
    fprintf(f,"%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%s\n%d\n%d\n",pika.move_x ,pika.move_y ,pokeBall.bx,pokeBall.by,charmander.cx,charmander.cy,arbock.cx,arbock.cy,lotusica.cx ,lotusica.cy,mew.cx ,mew.cy ,weezing.cx,weezing.cy , fireBall.cx,fireBall.cy,lifeXCo,lifeYCo,arceus.xCo,arceus.yCo, name, score, life);
	fclose(f);
}
void loadgame()
{
	FILE *f=fopen("save.txt","r");
    fscanf(f,"%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%s\n%d\n%d\n",&pika.move_x ,&pika.move_y ,&pokeBall.bx,&pokeBall.by,&charmander.cx,&charmander.cy,&arbock.cx,&arbock.cy,&lotusica.cx ,&lotusica.cy,&mew.cx ,&mew.cy ,&weezing.cx,&weezing.cy , &fireBall.cx,&fireBall.cy,&lifeXCo,&lifeYCo,&arceus.xCo,&arceus.yCo, name, &score, &life);
	fclose(f);
}


void gameMode()
{
	//show menu page
	if(mode == -1)
	{
		frontPage();
		menuPage();
	}
	
    //to show 'new game' page
    if(mode == 0)
    {
		newGame();
    }
	
    //to show 'settings' page
    else if(mode == 1)
    {
        settingPage();
    }

    //to show 'instructions' page
    else if (mode == 2)
    {
		instruction();
    }

    //to show 'credits' page
    else if(mode == 3)
    {
		credit();
    }
	

    //to show 'scores' page
    else if(mode == 4)
    {
		showScore();
    }

	//to 'quit' the game
	else if(mode == 5)
    {
		exit(0);
    }

	else if(mode == 6)
	{

		
	}
	
	//to show 'game over' page
	else if(mode == 8)
	{
		gameOver();	
	}

	//to show 'back' button
	if(mode > -1 && mode != 8 && mode != 0)
	{
		iShowBMP2(0, 685, "image\\back_button1.bmp", 0);
	}
}

#endif
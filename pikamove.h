#ifndef PIKAMOVE_H_INCLUDED
#define PIKAMOVE_H_INCLUDED

int pIndex = 0, moveIndex=0;
int standCnt=0;

bool stand = true;

char pForward[6][30]= {"image\\right\\01.bmp","image\\right\\02.bmp","image\\right\\03.bmp","image\\right\\04.bmp","image\\right\\05.bmp","image\\right\\06.bmp"};
char pBack[6][30]= {"image\\left\\01.bmp","image\\left\\02.bmp","image\\left\\03.bmp","image\\left\\04.bmp","image\\left\\05.bmp","image\\left\\06.bmp"};


struct move				//this structure is used to move pikachu
{
    int move_x;
    int move_y;
} pika;					//pika is the object throgh which pikachu moves

void pikaRun()
{
	if(mode == 0 && flag == 1)
		iShowBMP2(pika.move_x,pika.move_y,pForward[pIndex],0);  //show pikachu's left side face
}
void pikaBack()
{
	if(mode == 0 && flag == 1)
		iShowBMP2(pika.move_x, pika.move_y,pBack[pIndex],0);    //show pikachu's right side face
}

void pikaStand()
{
    if(mode == 0 && flag == 1)
    {
        standCnt++;
        if (moveIndex == 1)
            pikaRun();
        if(moveIndex == 2)
            pikaBack();
        if(standCnt >= 10)
        {
            standCnt = 0 ;				/*pikachu's stand position returns 
										after a while*/
            pIndex = 0 ;
            stand = true ;
        }
    }
}

void pikaFrontMovement()		/*when this fumnction is called
								pika moves from right to left*/

{
	stand = false ;
	moveIndex=1;
	pIndex++;
	pika.move_x+=30;
	if(pIndex>=5)
		pIndex=0;
}

void pikaBackMovement()			/*when this fumnction is called
								pika moves from right to left*/
{
    stand = false;
    moveIndex=2;
    pIndex++;
    pika.move_x-=30;

    if(pIndex>=5)
        pIndex=0;
}


#endif

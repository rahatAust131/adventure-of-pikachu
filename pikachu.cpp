# include "iGraphics.h"
# include "bitmap_loader.h"
# include "gameMode.h"
# include "initialvalues.h"
# include "loading.h"
# include "music.h"
# include "mouseworks.h"
# include "keyboardworks.h"



/*
	function iDraw() is called again and again by the system.
*/

void iDraw()
{
    iClear();
	gameMode();
}

/*
	function iPassiveMouse() is called when the user moves the mouse.
	(mx, my) is the position where the mouse pointer is.
*/

void iPassiveMouseMove(int mx,int my)
{
	mposx = mx;
	mposy = my;
	pasMouse();

}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/

void iMouseMove(int mx, int my)
{
    //printf("x = %d, y= %d\n",mx,my);
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/

void iMouse(int button, int state, int mx, int my)
{
    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
		mx1 = mx ;
		my1 = my ;
		leftButton();
    }


    if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
    {
        //place your codes here

    }
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
*/

void iKeyboard(unsigned char key)
{
	ch = key ;
    allKey();
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/

void iSpecialKeyboard(unsigned char key)
{
	ch = key ;
	allSpecialKey();
}




int main()
{
	fileWrite();

	initialization();
	
	bgMusic();
	t1Index = iSetTimer(450, changeLoading);

	iSetTimer(185, charmanderPositionChange);
	iSetTimer(185, fireBallPositionChange);

	//t2Index = iSetTimer(95, bossPositionChange);
	//t3Index = iSetTimer(55, pikaPowerChange);

	readFromFile();

	iInitialize(1366, 768, "A d v e n t u r e     O f    P i k a c h u");
    return 0;
}

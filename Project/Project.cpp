#include "iGraphics.h"
#include"variables.h"
#include"Stdlib.h"
#include"macro.h"
#include"stdlib.h"
#include"run.h"
#include"opponentcar.h"
#include"special.h"
#include"score.h"
#include"gameover.h"
#include"divider.h"
#include"timer.h"
#include"load.h"
#include"gameboard.h"
#include"level.h"
#include"draw.h"
//#include"keyboard.h"
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://


void iDraw()

{
	drawer();
	
}












/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{

	

	
}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{
	
}

void iMouse(int button, int state, int mx, int my)
{
	
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if(menu==0)
		{
		if(mx>=100 && mx<=250 && my>=600 && my<=650)
		  {
			  menu=1;
		}
	    else if(mx>=110 && mx<=310 && my>=530 && my<=580)
		   menu=3;
		else if(mx>=100 && mx<=280 && my>=450 && my<=520)
		menu=4;
		else  if(mx>=100 && mx<=180 && my>=350 && my<=400)
		   exit(0);
	    
		}
		
		{
			if(menu==3 && mx>=0 && mx<=80 && my>=750 && my<=800)
		  {
			  menu=0;
			}
		}
		
		{
			if(menu==4 && mx>=0 && mx<=80 && my>=750 && my<=800)
		  {
			  menu=0;
			}
		}
		
		
		

	}
	
	
	
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{		
	if((key=='E' || key =='e') && menu==2)
		exit(0);
	
	if(car_x>=0 && car_x<=114 && bombleft>0 &&(key=='B' || key =='b'))
		{
			bombx=48;
			bombh=opponent.opnt_y1;
				opponent.opnt_y1=-100;
	      bombleft--;
	   }

	if(car_x>=154 && car_x<=274 && bombleft>0 (key=='B' || key =='b'))
		{
			bombx=208;
			bombh=opponent.opnt_y2;
			opponent.opnt_y2=-100;
		      bombleft--;
	   }
	if(car_x>=316 && car_x<=436 && bombleft>0 &&(key=='B' || key =='b'))
		{
			bombx=370;
			bombh=opponent.opnt_y3;
			opponent.opnt_y3=-100;
		      bombleft--;
	   }
	if(car_x>=526 && car_x<=644 && bombleft>0 &&(key=='B' || key =='b'))
		{
			bombx=580;
			bombh=opponent.opnt_y4;
			opponent.opnt_y4=-100;
		      bombleft--;
	   }
	if(car_x>=676 && car_x<=796 && bombleft>0 &&(key=='B' || key =='b'))
		{
			bombx=730;
			bombh=opponent.opnt_y5;
			opponent.opnt_y5=-100;
		      bombleft--;
	   }
	if(car_x>=846 && car_x<=966 && bombleft> 0&&(key=='B' || key =='b'))
		{
			bombx=900;
			bombh=opponent.opnt_y6;
			opponent.opnt_y6=-100;
		      bombleft--;
	   }

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

	
	if (key == GLUT_KEY_RIGHT)
	{
		car_x+=10;	
		if(car_x>=900)
			car_x=900;
	}
	if (key == GLUT_KEY_LEFT)
	{
		car_x-=10;
		if(car_x<=0)
			car_x=0;
	}
	
	if (key == GLUT_KEY_END)
	{
   exit(0);		
	}
	
}


int main()     
{
	
		if(menu==0)
		PlaySound("menu.wav",NULL,SND_ASYNC|SND_LOOP);
			

	iInitialize(1000, 800, "Save The Car");
	///updated see the documentations

	
	iSetTimer(60,opponent_car);
	iSetTimer(20,divider);
	iSetTimer(40,run);
	iSetTimer(60,special);
	iSetTimer(5000,iscore);
	iSetTimer(1000,timer);
	iSetTimer(20,gameover);
	iSetTimer(5000,load);
    iSetTimer(20000,level);
	iSetTimer(10,gameboard);
	
	
	
	iStart();
	return 0;
}

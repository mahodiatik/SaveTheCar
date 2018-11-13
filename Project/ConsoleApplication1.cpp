#include "iGraphics.h"
#include"Stdlib.h"
#include"stdlib.h"
//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
int lane_y1=600,lane_y2=400,lane_y3=200,lane_y4=0,lane_y5=1000;
int car_x=0,opnt_car1=220,opnt_y1=1800,opnt_y2=800,opnt_y3=1000,opnt_y4=2000,opnt_y5=1500,opnt_y6=400;
int menu=-1,div_x=470,div_y,score=0,playtime;
char scoreboard[5000],timerboard[5000];
char gameoverscore[5000],gameovertime[5000];
int gamelevel=1,speed=10;
char levelboard[5000];
void iDraw()
{
	if(menu==-1)
		iShowBMP(0,0,"loading.bmp");
	if(menu==0)
	{
	iClear();
	iShowBMP(0,0,"menu2.bmp");
	iSetColor(183, 216, 253);
	iFilledRectangle(100,500,150,50);
	iSetColor(192,0,0);
	iText(110,515,"NEW GAME",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(183, 216, 253);
	iFilledRectangle(100,400,200,50);
	iSetColor(192,0,0);
	iText(110,415,"INSTRUCTIONS",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(183, 216, 253);
	iFilledRectangle(100,300,170,50);
	iSetColor(192,0,0);
	iText(110,315,"HIGH SCORE",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(183, 216, 253);
	iFilledRectangle(100,200,80,50);
	iSetColor(192,0,0);
	iText(110,215,"EXIT",GLUT_BITMAP_TIMES_ROMAN_24);


	
	}
	if(menu==3)
	{
		iClear();
        iShowBMP(0,0,"Instructions.bmp");
	}
	if(menu==4)
	{
		iClear();
        iShowBMP(0,0,"highscore.bmp");
	}

	if(menu==2)
	{
		iClear();
		iShowBMP(0,0,"CLINTU.bmp");
		iSetColor(255,255,251);
	    iText(750,600,gameoverscore,GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(255,255,251);
	    iText(50,600,gameovertime,GLUT_BITMAP_TIMES_ROMAN_24);
		iPauseTimer(0);
		iPauseTimer(0);
		iPauseTimer(0);
		iPauseTimer(0);
		iPauseTimer(0);
	}
	if(menu==1)
	{
		iClear();
	iSetColor(200, 0, 0);
	iFilledRectangle(160,lane_y1, 10, 100);
	iSetColor(0,250, 0); 
	iFilledRectangle(160,lane_y5, 10, 100);
	iSetColor(0,0,250);
	iFilledRectangle(160,lane_y2, 10, 100);
	iSetColor(200, 200, 0);
	iFilledRectangle(160,lane_y3, 10, 100);
	iSetColor(200, 0, 100);
	iFilledRectangle(160,lane_y4, 10, 100);
	iSetColor(200, 0, 0);
	iFilledRectangle(320,lane_y1, 10, 100);
	iSetColor(0,250, 0);
	iFilledRectangle(320,lane_y5, 10, 100);
	iSetColor(0,0,250);
	iFilledRectangle(320,lane_y2, 10, 100);
	iSetColor(200, 200, 0);
	iFilledRectangle(320,lane_y3, 10, 100);
	iSetColor(200, 0, 100);
	iFilledRectangle(320,lane_y4, 10, 100);
	iSetColor(200, 0, 0);
	iFilledRectangle(680,lane_y1, 10, 100);
	 iSetColor(0,250, 0);
	iFilledRectangle(680,lane_y5, 10, 100);
	iSetColor(0,0,250);
	iFilledRectangle(680,lane_y2, 10, 100);
	iSetColor(200, 200, 0);
	iFilledRectangle(680,lane_y3, 10, 100);
	iSetColor(200, 0, 100);
	iFilledRectangle(680,lane_y4, 10, 100);
	iFilledRectangle(850,lane_y1, 10, 100);
    iSetColor(0,250, 0);
	iFilledRectangle(850,lane_y5, 10, 100);
	iSetColor(0,0,250);
	iFilledRectangle(850,lane_y2, 10, 100);
	iSetColor(200, 200, 0);
	iFilledRectangle(850,lane_y3, 10, 100);
	iSetColor(200, 0, 100);
	iFilledRectangle(850,lane_y4, 10, 100);
	iFilledRectangle(495,lane_y1, 10, 100);
    iSetColor(0,250, 0); 
	iFilledRectangle(495,lane_y5, 10, 100);
	iSetColor(0,0,250);
	iFilledRectangle(495,lane_y2, 10, 100);
	iSetColor(200, 200, 0);
	iFilledRectangle(495,lane_y3, 10, 100);
	iSetColor(200, 0, 100);
	iFilledRectangle(495,lane_y4, 10, 100);
	 iSetColor(200, 0, 0);
	iFilledRectangle(div_x,div_y,  60, 1200);
	iShowBMP(car_x,0,"shuvo.bmp");
	iShowBMP(48,opnt_y1,"opponent.bmp");
	iShowBMP(208,opnt_y2,"opponent.bmp");
	iShowBMP(370,opnt_y3,"opponent.bmp");
	iShowBMP(580,opnt_y4,"opponent.bmp");
   	iShowBMP(730,opnt_y5,"opponent.bmp");
	iShowBMP(900,opnt_y6,"opponent.bmp");
	iSetColor(102,255,51);
	iText(850,700,scoreboard,GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(102,255,51);
	iText(100,700,timerboard,GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(102,255,51);
	iText(480,700,levelboard,GLUT_BITMAP_TIMES_ROMAN_24);

	
	}
	
}
void load()
{
	if(menu==-1)
	   menu=0;
}
void run()
{

	if(menu==1)
	{
     lane_y1-=speed;
	lane_y2-=speed;
	lane_y3-=speed;
	lane_y4-=speed;
	lane_y5-=speed;
	if(lane_y1<=0)
		lane_y1=800;
	if(lane_y2<=0)
		lane_y2=800;
	if(lane_y3<=0)
		lane_y3=800;
	if(lane_y4<=0)
		lane_y4=800;
	if(lane_y5<=0)
		lane_y5=800;
	}
}
void divider()
{
	if(menu==1)
	{
	div_y-=speed;
	if(div_y<=-1800)
		div_y=1500;
	if(car_x>=416 && car_x<=476 && div_y>=-1175 && div_y <=125)
		car_x=416;
	if(car_x>=500 && car_x<=540 && div_y>=-1175 && div_y <=125)
		car_x=532;
	}
	
}
void iscore()
{
	if(menu==1)
	{
		score+=10;
	}
}
void gameboard()
{
    sprintf(scoreboard,"Score: %d",score);
	sprintf(timerboard,"Time: %d second(s)",playtime);
	sprintf(levelboard,"Level: %d",gamelevel);

}
void timer()
{
	if(menu==1)
	{
		playtime++;

	}
}
void gameover()
{
	sprintf(gameoverscore,"Your total score is: %d",score);
	sprintf(gameovertime,"Your have played %d second(s)",playtime);
	if(car_x>=0 && car_x<=114 && opnt_y1 >=0 && opnt_y1<=125){
			menu=2;
		
	}
	if(car_x>=154 && car_x<=274 && opnt_y2 >=0 && opnt_y2<=125 ){
		menu=2;	
	}
	if(car_x>=316 && car_x<=436 && opnt_y3 >=0 && opnt_y3<=125 ){
		menu=2;
	}
	if(car_x>=526 && car_x<=644 && opnt_y4 >=0 && opnt_y4<=125 ){
		menu=2;
	} 
	if(car_x>=676 && car_x<=796 && opnt_y5>=0 && opnt_y5<=125 ){
		menu=2;	
	} 
	if(car_x>=846 && car_x<=966 && opnt_y6>=0 && opnt_y6<=125 ){
		menu=2;
		
	} 
}


void opponent_car()
{  
	if(menu==1)
	{
	opnt_y1-=speed;
	opnt_y2-=speed;
	opnt_y3-=speed;
	opnt_y4-=speed;
	opnt_y5-=speed;
	opnt_y6-=speed;
	if(opnt_y1<=-300)
		opnt_y1=1000;
	if(opnt_y2<=-300)
		opnt_y2=1500;
	if(opnt_y3<=-300)
		opnt_y3=1000;
	if(opnt_y4<=-300)
		opnt_y4=1500;
	if(opnt_y5<=-300)
		opnt_y5=1000;
	if(opnt_y6<=-300)
		opnt_y6=1500;
	}
}


void level()
{
	if(menu==1)
	{
		gamelevel++;
		speed+=10;
	}
	
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
		if(mx>=100 && mx<=250 && my>=500 && my<=550)
		menu=1;
		else if(mx>=100 && mx<=300 && my>=400 && my<=450)
		menu=3;
		else if(mx>=100 && mx<=180 && my>=200 && my<=250)
		exit(0);
		else if(mx>=100 && mx<=280 && my>=300 && my<=350)
		menu=4;
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
	
	if((key=='M' || key =='m') && menu==3)
		menu=0;
	if((key=='M' || key =='m') && menu==4)
		menu=0;

	
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
	

	iInitialize(1000, 800, "Save The Car");
	///updated see the documentations

	iSetTimer(60,opponent_car);
	iSetTimer(20,divider);
	iSetTimer(40,run);
	iSetTimer(5000,iscore);
	iSetTimer(1000,timer);
	iSetTimer(20,gameover);
	iSetTimer(11000,load);
	iSetTimer(20000,level);
	iSetTimer(10,gameboard);
	iStart();
	return 0;}
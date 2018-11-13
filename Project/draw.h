void drawer()
{
	if(menu==-1)
	{
		iShowBMP(0,0,"loading.bmp");
	}

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
		iSetColor(183, 216, 253);
	    iFilledRectangle(0,750,80,50);
	    iSetColor(192,0,0);
	    iText(10,765,"BACK",GLUT_BITMAP_TIMES_ROMAN_24);
	}
	if(menu==4)
	{
		iClear();
        iShowBMP(0,0,"highscore.bmp");
		iText(400,410,highscoreboard,GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(183, 216, 253);
	    iFilledRectangle(0,750,80,50);
	    iSetColor(192,0,0);
	    iText(10,765,"BACK",GLUT_BITMAP_TIMES_ROMAN_24);
		
	}

	if(menu==2)
	{
		iClear();
		iShowBMP(0,0,"CLINTU.bmp");
		iSetColor(255,255,251);
	    iText(750,600,gameoverscore,GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(255,255,251);
	    iText(750,500,gameoverhighscore,GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(255,255,251);
	    iText(50,600,gameovertime,GLUT_BITMAP_TIMES_ROMAN_24);
		
	}
	if(menu==1)
	{
		iClear();
	iSetColor lane_color;
	iFilledRectangle(lane_x1,lanes.lane_y1, 10, 100);
	iSetColor lane_color; 
	iFilledRectangle(lane_x1,lanes.lane_y5, 10, 100);
	iSetColor lane_color;
	iFilledRectangle(lane_x1,lanes.lane_y2, 10, 100);
	iSetColor lane_color;
	iFilledRectangle(lane_x1,lanes.lane_y3, 10, 100);
	iSetColor lane_color;
	iFilledRectangle(lane_x1,lanes.lane_y4, 10, 100);
	iSetColor lane_color;
	iFilledRectangle(lane_x2,lanes.lane_y1, 10, 100);
	iSetColor lane_color;
	iFilledRectangle(lane_x2,lanes.lane_y5, 10, 100);
	iSetColor lane_color;
	iFilledRectangle(lane_x2,lanes.lane_y2, 10, 100);
	iSetColor lane_color;
	iFilledRectangle(lane_x2,lanes.lane_y3, 10, 100);
	iSetColor lane_color;
	iFilledRectangle(lane_x2,lanes.lane_y4, 10, 100);
	iSetColor lane_color;
	iFilledRectangle(lane_x4,lanes.lane_y1, 10, 100);
	 iSetColor lane_color;
	iFilledRectangle(lane_x4,lanes.lane_y5, 10, 100);
	iSetColor lane_color;
	iFilledRectangle(lane_x4,lanes.lane_y2, 10, 100);
	iSetColor lane_color;
	iFilledRectangle(lane_x4,lanes.lane_y3, 10, 100);
	iSetColor lane_color;
	iFilledRectangle(lane_x4,lanes.lane_y4, 10, 100);
	iFilledRectangle(lane_x5,lanes.lane_y1, 10, 100);
    iSetColor lane_color;
	iFilledRectangle(lane_x5,lanes.lane_y5, 10, 100);
	iSetColor lane_color;
	iFilledRectangle(lane_x5,lanes.lane_y2, 10, 100);
	iSetColor lane_color;
	iFilledRectangle(lane_x5,lanes.lane_y3, 10, 100);
	iSetColor lane_color;
	iFilledRectangle(lane_x5,lanes.lane_y4, 10, 100);
	iFilledRectangle(lane_x3,lanes.lane_y1, 10, 100);
    iSetColor lane_color;
	iFilledRectangle(lane_x3,lanes.lane_y5, 10, 100);
	iSetColor lane_color;
	iFilledRectangle(lane_x3,lanes.lane_y2, 10, 100);
	iSetColor lane_color;
	iFilledRectangle(lane_x3,lanes.lane_y3, 10, 100);
	iSetColor lane_color;
	iFilledRectangle(lane_x3,lanes.lane_y4, 10, 100);
	 iSetColor divider_color;
	iFilledRectangle(div_x,div_y,  60, 1200);
	iShowBMP(car_x,0,"shuvo.bmp");


	iShowBMP(opponentcar_x1,opponent.opnt_y1,"opponent.bmp");
	iShowBMP(opponenent_x2,opponent.opnt_y2,"opponent.bmp");
	iShowBMP(opponenent_x3,opponent.opnt_y3,"opponent.bmp");
	iShowBMP(opponenent_x4,opponent.opnt_y4,"opponent.bmp");
   	iShowBMP(opponenent_x5,opponent.opnt_y5,"opponent.bmp");
	iShowBMP(opponenent_x6,opponent.opnt_y6,"opponent.bmp");
	iShowBMP(bombx,bombh,"bomb.bmp");

	if(gamelevel>=2)
	{
    iShowBMP(special_bike_x1,sbike.bike_y1,"specialbike.bmp");
	iShowBMP(special_bike_x2,sbike.bike_y2,"specialbike.bmp");
	iShowBMP(special_bike_x3,sbike.bike_y3,"specialbike.bmp");
	iShowBMP(special_bike_x4,sbike.bike_y3,"specialbike.bmp");
	}
	iSetColor(102,255,51);
	iText(850,700,scoreboard,GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(102,255,51);
	iText(100,700,timerboard,GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(102,255,51);
	iText(480,750,levelboard,GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(102,255,51);
	iText(480,700,bombboard,GLUT_BITMAP_TIMES_ROMAN_24);


	
	}
}

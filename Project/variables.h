struct lane{

                     int lane_y1;
					 int lane_y2;
					 int lane_y3;
					 int lane_y4;
					 int lane_y5;
} lanes={600,400,200,0,1000};
                     
int menu=-1,car_x=0,speed=10;
int bombh=900,bombx=0;
int bombleft=0;
struct special{

                     int bike_y1;
					 int bike_y2;
					 int bike_y3;
					 int bike_y4;
} sbike={1800,800,1000,2000};
int sspeed=30;
int score=0,highest_score,i=0,j;
char ch[10000],bh[10000];
struct oppnt{
	    int opnt_car1;
		int opnt_y1;
		int opnt_y2;
		int opnt_y3;
		int opnt_y4;
		int opnt_y5;
		int opnt_y6;
} opponent={220,1800,800,1000,2000,1500,400} ;
int div_x=470,div_y;
char scoreboard[5000],timerboard[5000],levelboard[5000],bombboard[5000],highscoreboard[5000];
int gamelevel=1;
int playtime=0;
char gameoverscore[5000],gameovertime[5000],gameoverhighscore[5000];
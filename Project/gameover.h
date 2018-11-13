
void gameover()
{
	sprintf(gameoverscore,"Your total score is: %d",score);
	sprintf(gameoverhighscore,"Highest score: %d",highest_score);
	sprintf(gameovertime,"Your have played %d second(s)",playtime/10);
	if(car_x>=0 && car_x<=114 && opponent.opnt_y1 >=0 && opponent.opnt_y1<=125){
			menu=2;
		
	}
	if(car_x>=154 && car_x<=274 && opponent.opnt_y2 >=0 && opponent.opnt_y2<=125 ){
		menu=2;	
	}
	if(car_x>=316 && car_x<=436 && opponent.opnt_y3 >=0 && opponent.opnt_y3<=125 ){
		menu=2;
	}
	if(car_x>=526 && car_x<=644 && opponent.opnt_y4 >=0 && opponent.opnt_y4<=125 ){
		menu=2;
	} 
	if(car_x>=676 && car_x<=796 && opponent.opnt_y5>=0 && opponent.opnt_y5<=125 ){
		menu=2;	
	} 
	if(car_x>=846 && car_x<=966 && opponent.opnt_y6>=0 && opponent.opnt_y6<=125 ){
		menu=2;
		
	}


	if(car_x>=91 && car_x<=199 && sbike.bike_y1 >=0 && sbike.bike_y1<=80){
			menu=2;
		
	}
	
	if(car_x>=251 && car_x<=359 && sbike.bike_y2 >=0 && sbike.bike_y2<=80){
			menu=2;
		
	}
	
	if(car_x>=611 && car_x<=719 && sbike.bike_y3 >=0 && sbike.bike_y3<=80){
			menu=2;
		
	}
	
	if(car_x>=781 && car_x<=889 && sbike.bike_y4 >=0 && sbike.bike_y4<=80){
			menu=2;
		
	}


}
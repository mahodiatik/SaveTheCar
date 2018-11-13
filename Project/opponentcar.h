
void opponent_car()
{  
	if(menu==1)
	{
	opponent.opnt_y1-=speed;
	opponent.opnt_y2-=speed;
	opponent.opnt_y3-=speed;
	opponent.opnt_y4-=speed;
	opponent.opnt_y5-=speed;
	opponent.opnt_y6-=speed;
	if(opponent.opnt_y1<=-300)
		opponent.opnt_y1=1000;
	if(opponent.opnt_y2<=-300)
		opponent.opnt_y2=1500;
	if(opponent.opnt_y3<=-300)
		opponent.opnt_y3=1000;
	if(opponent.opnt_y4<=-300)
		opponent.opnt_y4=1500;
	if(opponent.opnt_y5<=-300)
		opponent.opnt_y5=1000;
	if(opponent.opnt_y6<=-300)
		opponent.opnt_y6=1500;
	}
}
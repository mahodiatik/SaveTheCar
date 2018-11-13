
void special()
{
	if(menu==1 && gamelevel>=2)
	{
	sbike.bike_y1-=sspeed;
	sbike.bike_y2-=sspeed;
	sbike.bike_y3-=sspeed;
	sbike.bike_y4-=sspeed;
	if(sbike.bike_y1<=-300)
		sbike.bike_y1=1000;
	if(sbike.bike_y2<=-300)
		sbike.bike_y2=1500;
	if(sbike.bike_y3<=-300)
		sbike.bike_y3=1000;
	if(sbike.bike_y4<=-300)
		sbike.bike_y4=2500;
	}
}
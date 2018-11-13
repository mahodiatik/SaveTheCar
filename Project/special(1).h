struct special{

                     int bike_y1;
					 int bike_y2;
					 int bike_y3;
					 int bike_y4;
} sbike={1800,800,1000,2000};
int sspeed=30;
void special()
{
	if(menu==1)
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
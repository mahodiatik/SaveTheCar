
		

void run()
{
     if(menu==1)
	{
    lanes.lane_y1-=speed;
	lanes.lane_y2-=speed;
	lanes.lane_y3-=speed;
	lanes.lane_y4-=speed;
	lanes.lane_y5-=speed;
	if(lanes.lane_y1<=0)
		lanes.lane_y1=800;
	if(lanes.lane_y2<=0)
		lanes.lane_y2=800;
	if(lanes.lane_y3<=0)
		lanes.lane_y3=800;
	if(lanes.lane_y4<=0)
		lanes.lane_y4=800;
	if(lanes.lane_y5<=0)
		lanes.lane_y5=800;
	}
}

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
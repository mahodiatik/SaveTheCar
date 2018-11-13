
void timer()
{
	if(menu==1)
	{
		playtime+=10;
		if(playtime%50==0)//num of bombs increases after every 5s.
			bombleft++;
		if(playtime%1==0)
			bombh=1000;
	}
		

		
}
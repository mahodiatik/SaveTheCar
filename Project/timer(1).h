int bombleft=0;
void timer()
{
	if(menu==1)
	{
		playtime+=10;
		if(playtime%50==0)
			bombleft++;
		if(playtime%1==0)
			bombh=1000;

	}
}
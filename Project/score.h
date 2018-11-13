
void iscore()
{
	if(menu==1)
	{
		score+=10;
	}
    FILE *file;
    file =fopen("yoyo.txt","r");
    if(file==NULL)
    {
        puts("file is not created");
    }
    else
    {
        printf("file is opened\n");
        fscanf(file,"%d",&highest_score);
        if(score>highest_score)
        {
            file=fopen("yoyo.txt","w");
            highest_score=score;
            fprintf(file,"%d",highest_score);
        }
        fclose(file);
        int s=highest_score;
        while(s!=0)
        {
            int p=s%10;
            ch[i]=p+'0';
            i++;
            s=s/10;
        }
        for(j=0,s=i-1; j<i; j++,s--)
        {
            bh[j]=ch[s];
        }
    }
}
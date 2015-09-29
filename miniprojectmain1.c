int main()
{
	int i;
	FILE *ptr,*tr;
	
	if((tr=fopen("tra.dat","r"))==NULL)
	{
		tr=fopen("tra.dat","w");
		strcpy(train.tno,"3143");
		strcpy(train.tname,"Darjeeling Mail");
		fwrite(&train,sizeof(train),1,tr);
		strcpy(train.tno,"3147");
		strcpy(train.tname,"Uttarbanga Exp");
		fwrite(&train,sizeof(train),1,tr);
		fclose(tr);
	}

	
	if((ptr=fopen("berths3.dat","r"))==NULL)
	{
	    ptr=fopen("berths3.dat","wb");
	    strcpy(berth.coano,d[0]);
	    strcpy(berth.status,"V");
	    for(i=1;i<=73;i++)
	    {
		   if(i>72)
		   {
				count++;
				strcpy(berth.coano,d[count]);
				i=1;
		   }
		   if(count==8)
			   break;
		   berth.seat_no=i;
		   fwrite(&berth,sizeof(berth),1,ptr);

	    }
	}
	fclose(ptr);
	if((ptr=fopen("berths7.dat","r"))==NULL)
	{
	    ptr=fopen("berths7.dat","wb");
	    strcpy(berth.coano,d[0]);
	    strcpy(berth.status,"V");
	    for(i=1;i<=73;i++)
	    {
		   if(i>72)
		   {
				count++;
				strcpy(berth.coano,d[count]);
				i=1;
		   }
		   if(count==8)
			   break;
		   berth.seat_no=i;
		   fwrite(&berth,sizeof(berth),1,ptr);

	    }
     }
     fclose(ptr);
	
	
	mainmenu();
	reserv();//will call pass_name and pass_age functions
	cancel();

	return 0;
}

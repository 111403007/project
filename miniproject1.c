
void mainmenu() {

	char choice;
	
	printf("1. For reservation press  1
");
	gotoxy(17,14);
	printf("2. For cancellation press 2
");
	gotoxy(17,16);
	printf("3. For enquiry press 3
");
	gotoxy(17,18);
	printf("4. For closing the program press 4
");
	gotoxy(48,25);
	printf("Created by SOFTECH SOLUTIONS Ltd.");
	gotoxy(20,20);
	printf("Choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			reserv();
			break;
		case 2:
			
			cancel();
			break;
		case 3:
			enquiry();
			break;
		case 4:
			exit(1);
		default:
			gotoxy(29,20);
			printf("Not a valid choice");
			
			main();
	}
}

int pass_name(int i,int x, int y)
{
	int flag,pos;
	do
	{
		flag=1;
		gotoxy(x,y);
		fflush(stdin);
		gets(passenger.passen[i]);
		fflush(stdin);
		strupr(passenger.passen[i]);
		if (strlen(passenger.passen[i]) == 0)
		{
			if(i>0)
			{
				return(7);
			}
			gotoxy(10,24);
			printf("aPassenger Name should not be left BLANK");
			flag=0;
			//i--;
			
			
		}
		else if (strlen(passenger.passen[i]) >20)
		{
			//gotoxy(10,20);
			gotoxy(10,24);
			printf("aPassenger Name must be less than 20 characters");
			flag=0;
			
			
		}
	}while(flag==0);
	gotoxy(x,y);
	puts(passenger.passen[i]);
	i++;
	return(i);
}


int pass_age(int k,int x,int y)
{
	int flag,i,j;
	do
	{
		flag=1;
		gotoxy(x,y);
		if(flag==1)
			no_pass++;
		gets(passenger.age[k]);
		fflush(stdin);
		strupr(passenger.age[k]);
		if (strlen(passenger.age[k]) == 0)
		{
			gotoxy(10,24);
			printf("aPassenger's Age should not be left BLANK");
			flag=0;
			
			
		}
		else if (strlen(passenger.age[k])!=2)
		{
			gotoxy(10,24);
			printf("aPassenger's Age must be equal to 2 characters");
			flag=0;
			//	k--;
			
			
		}
		else if(strcmp(passenger.age[k],"00")==0)
		{
			gotoxy(10,24);
			printf("aPassenger's Age cannot be less than 1 year");
			flag=0;
			
			
		}
		for(i=k;i<k+1;i++)
		{
			for(j=0;j<2;j++)
			{
				if(!isdigit(passenger.age[i][j]))
				{
					gotoxy(10,24);
					printf("aEnter a valid age");
					flag=0;
					
					
				}
			}
		}
	}while (flag==0);
	gotoxy(x,y);
	k++;
	puts(passenger.age[k]);
	return(k);
}

	

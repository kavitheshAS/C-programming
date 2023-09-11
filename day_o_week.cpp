#include<stdio.h>
int main()
{
	int dow;
	printf("enter the day of the weeek");
	scanf("%d",&dow);
	if(dow==1)
	{
		printf("its monday");
	}
	else if(dow==2)
	{
		printf("its tuesday");
	}
	else if(dow==3)
	{
		printf("its wednesday");
	}
	else if(dow==4)
	{
		printf("its thursday");
	}
	else if(dow==5)
	{
		printf("its friday");
	}
	else if(dow==6)
	{
		printf("its saturday");
	}
	else if(dow==7)
	{
		printf("its sunday");
	}
	return 0;
}

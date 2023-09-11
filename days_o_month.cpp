#include<stdio.h>
int main()
{
	int yr,m;
	printf("enter the year and month in numbers");
	scanf("%d%d",&yr,&m);
	if(yr%4==0 &&(yr%100!=0 || yr%400==0))
	{
		if(m==1 || m==3 || m==5 || m==7 || m==8|| m==10 ||m==12)
		{
			printf("the month has 31 days");
		}
		else if(m=2)
		{
			printf("the month has 29 days ");
		}
		else
		{
			printf("the month has 30 days");
		}
	}
	else
	{
        	if(m==1 ||m==3 || m==5 || m==7 || m==8 || m==10 ||m==12)
		{
			printf("the month has 31 days");
		}
		else if(m=2)
		{
			printf("the month has 28 days ");
		}
		else
		{
			printf("the month has 30 days");
		}
	}
}

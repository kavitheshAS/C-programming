#include<stdio.h>
int main()
{
	int u;
	printf("enter the units of electricity used");
	scanf("%d",&u);
	if(u>=0 && u<= 100)
	{
		printf("cost of electricity used is:%d",u*2);
	}
	else if(u>=101 && u<= 250)
	{
		printf("cost of elctricity used is:%d",u*3.5);
	}
	else
	printf("cost of elctricity used is:%d",u*5);
	return 0;
}

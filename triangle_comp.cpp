#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the lenght of sides of the triangle");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && a==c && b==c)
	{
		printf("its a equilateral triangle");
	}
	else if(a==b || a==c || b==c)
	{
		printf("its a isoceles triangle");
	}
	else
	{
		printf("its a scalene triangle");
	}
	return 0;
}

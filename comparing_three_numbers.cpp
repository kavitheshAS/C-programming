#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the values of three integers a,b,c:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("a is the greatest");
	}
	else if(b>c && b>a)
	{
		printf("b is the greatest");
	}
	else
	{
		printf("c is the greatest");
	}
	return 0;
}

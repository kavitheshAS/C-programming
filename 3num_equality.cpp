#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter values of a,b,c:\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && a==c && b==c)
	{
		printf("all the numbers are equal");
	}
	else
	{
		printf("all numbers are not equal");
	}
	return 0;
}

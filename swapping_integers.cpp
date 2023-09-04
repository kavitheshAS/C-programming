#include<stdio.h>
int main()
{
	int a,b,t;
	printf("enter the values of a and b:");
	scanf("%d %d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("value of a is %d ,value of b is %d",a,b);
	return 0;
}

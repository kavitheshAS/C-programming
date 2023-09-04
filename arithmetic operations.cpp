#include<stdio.h>
int main(void)
{
	int a,b;
	printf("Enter the values of a and b: ");
	scanf("%d %d",&a,&b);
	int c=a+b;
	printf("sum of %d and %d is %d\n",a,b,c);
	int d=a-b;
	printf("difference of %d and %d is %d\n",a,b,d);
	int e=a*b;
	printf("product of %d and %d is %d\n",a,b,e);
	float f=a/b;
	printf("%d/%d is %f\n",a,b,f);
	return 0;
		
}


#include<stdio.h>
/*program to find area of circle*/
#include<math.h>
int main()
{
	float pi=3.14;
	int r;
	printf("enter the radius of the circle:");
	scanf("%d",&r);
	float area=pi*pow(r,2);
	printf("area of a circle with radius %d is %f",r,area);
	return 0;    
}

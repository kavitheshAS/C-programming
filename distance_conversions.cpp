#include<stdio.h>
int main()
{
	float km,m,cm,mm;
	printf("enter value in kilometer:");
	scanf("%f",&km);
	m=1000*km;
	cm=100*m;
	mm=10*cm;
	printf("value of %f km in metres is %f\n",km,m);
	printf("value of %f km in centimeters is %f\n",km,cm);
	printf("value of %f km in millimeters is %f\n",km,mm);
	return 0;	
}

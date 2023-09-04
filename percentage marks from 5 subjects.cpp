#include<stdio.h>
//program to find percentage with 5 individual  marks 
int main()
{
	float tmarkspersub; /*total marks per subject*/
	printf("enter the total marks per subject:");
	scanf("%f",&tmarkspersub);
	float a,b,c,d,e;
	printf("Enter marks obtained in subjects a,b,c,d,e:");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	float perc=(((a+b+c+d+e)/(tmarkspersub*5))*100);
	printf("total percentage obtained is %f %%",perc);
	return 0;
	
}

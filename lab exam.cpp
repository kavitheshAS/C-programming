#include <stdio.h>
int main()
{
	int n;
	printf("enter the value of n,which is the max value in pattern");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=2*i;j++)
		{
			if(j%2==0)
			{
				printf("%d",i+1);
			}
			if(j%2!=0)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	for(int i=n;i>0;i--)
	{
		for(int j=0;j<2*i-1;j++)
		{
			if(j%2==0)
			{
				printf("%d",i);
			}
			if(j%2!=0)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}

#include <stdio.h>
int main()
{
	int n;
	printf("enter the number of values u need in your array");
	scanf("%d",&n);
	int a[n];
	printf("enter the values you need in the array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j=0;j<n;j++)
    {
    	printf("%d ",a[j]);
	}
}

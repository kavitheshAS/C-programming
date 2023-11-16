#include <stdio.h>
void swap(int *a,int *b);
void read(int a[],int size);
int main()
{
	int n;
	printf("enter the number of  values we want in array:");
	scanf("%d",&n);
	int a[n];
	read(a,n);
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
			}
		}
	}
	printf("***************\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
void swap(int a,int b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
void read(int a[],int size)
{
	printf("enter the values you need in the array:");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
}

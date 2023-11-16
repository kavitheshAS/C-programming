#include <stdio.h>
int main()
{
	int temp;
	int a[5]={2,6,5,10,8};
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=1;i<n;i++)
	{
		temp=a[i];
		int j=i-1;
		while(j>0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;				
	}
	 printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}

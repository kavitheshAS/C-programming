#include <stdio.h>

int main()
{
    int n;
    printf("enter the value of n:: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the %d value: ",i);
        scanf("%d",&a[i]);
    }
    int max=a[0],min=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        
    }
    for(int i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        
    }
    printf("the max value is %d and the min value is %d\n",max,min);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("the sum is %d",sum);
        
}

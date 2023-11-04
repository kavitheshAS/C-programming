#include <stdio.h>
int main()
{
    int n,first=0,second=1,next,i;
    printf("enter the value of n:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("enter a valid number:");
    }
    else if(n==0)
    {
        printf("the 0'th fibonacii number is 0");
    }
    else if(n==1)
    {
        printf("the 1'st fibonacii number is ");
    }
    else 
    {
        for(i=2;i<=n;i++)
        {
            next=first+second;
            first=second;
            second=next;
        }
        printf("the %d th fibonacii number is %d \n",n,next);
    }
    return 0;
}
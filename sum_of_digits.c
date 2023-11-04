#include <stdio.h>
int main()
{
    int n,sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    printf("the sum of the digits is %d",sum);
}
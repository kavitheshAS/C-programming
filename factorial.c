#include <stdio.h>
int main()
{
    int n;
    unsigned long int factorial=1;
    printf("enter n value, to find factorial of n: ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("enter a positive number !!");
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            factorial=factorial*i;
        }
    }
    printf("factorial of %d is %lu\n",n,factorial);
}


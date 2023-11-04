#include <stdio.h>
int main()
{
    int n;
    int count;
    printf("enter the value of n, whose multiplication table you wanna print and till how many counts:");
    scanf("%d %d",&n,&count);
    for(int i=0;i<=count;i++)
    {
        printf("%d x %d =%d\n",i,n,i*n);
    }
    return 0;
}
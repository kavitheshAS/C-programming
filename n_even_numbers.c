#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of n ");
    scanf("%d",&n);
    int no=2;
    for(int i=0;i<(n+1)/2;i++)
    {
        printf("%d\n",no);
        no=no+2;
    }
}

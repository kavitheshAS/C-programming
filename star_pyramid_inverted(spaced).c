#include <stdio.h>
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=(2*i-1);k++)
        {
            if(k%2==0)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    
}

#include <stdio.h>
int main()
{
    int n;
    printf("enter n value till which we have to add: ");
    scanf("%d",&n);
    int a=0;
    for(int i=0;i<n;i++)
    {
        
        a=a+a+1;
        
    }
    printf("%d",a);
    
}


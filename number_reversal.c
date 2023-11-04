#include <stdio.h>
int main()
{
    int n,reversed=0;
    printf("enter the number to be reversed:");
    scanf("%d",&n);
    while(n!=0)
    {
        int digit =n%10;
        reversed=(10*reversed)+digit;
        n=n/10;
        
    }
    printf("%d",reversed);
    return 0;
}
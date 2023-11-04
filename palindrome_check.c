#include <stdio.h>
int main()
{
    int n,reversed=0;
    printf("enter the number to be reversed:");
    scanf("%d",&n);
    int original=n;
    while(n!=0)
    {
        int digit=n%10;
        reversed=(10*reversed)+digit;
        n=n/10;
    }
    printf("the reversed number is %d\n",reversed);
    if(original==reversed)//we introduced a new variable , coz n gets modified in the loop , so original stays unchanged 
    {
        printf("the number is a palindrome");
    }
    else
    {
        printf("the number is not a palindrome");
    }
}
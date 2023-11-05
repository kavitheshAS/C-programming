#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the values of a and b:");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the  value of a is %d and value of b is %d",a,b);
    return 0;
}
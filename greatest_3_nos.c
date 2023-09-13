#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the 3  bowling techniques values");
    scanf("%d%d%d",&a,&b,&c);
    if(a>c && a>b)
    {
        printf("a is the best technique");
    }
    else if(b>c)
    {
        printf("b is the best technique");
    }
    else
    {
        printf("c is the best technique");
    }
    return 0;
}

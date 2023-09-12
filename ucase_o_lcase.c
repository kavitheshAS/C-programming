
#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    /*printf("%d",ch); */
    //prev line is typed if you wanna know the ascii value of the typed character 
    if(ch>=65 && ch<=90)
    {
        printf("the character is a uppercase");
    }
    else if(ch>=97 && ch<=122)
    {
        printf("the character is lowercase");
    
    }
    else
    {
        printf("the entered character is neither uppercase nor lowercase");
    }
    return 0;
}

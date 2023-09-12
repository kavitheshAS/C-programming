
#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    printf("%d",ch);
    //prev line is typed if you wanna know the ascii value of the typed character 
    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
    {
        printf("the character is a alphabet");
    }
    else if(ch>=48 && ch<=57)
    {
        printf("the character is a digit");
    
    }
    else
    {
        printf("the character is  a special character ");
    }
    return 0;
}

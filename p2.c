#include <stdio.h>
#include <string.h>

int main()
{
    char c1;
    char word[100];
    char string[100];
    scanf("%c",&c1);//reading a character input
    scanf("%s",word);//reading a word
    getchar();
    fgets(string,sizeof(string),stdin);
    printf("%c\n",c1);
    printf("%s\n",word);
    printf("%s\n",string);
}

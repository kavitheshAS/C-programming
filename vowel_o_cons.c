
#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    //printf("%d",ch); 
    //prev line is typed if you wanna know the ascii value of the typed character 
   if(ch==65||ch==69||ch==73||ch==79||ch==85||ch==97||ch==101||ch==105||ch==111||ch==117)
   {
       printf("vowel");
   }
   else if((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
   {
       printf("consonant");
   }
   else
   {
       printf("neither a vowel or consonant");
   }
   return 0;
}
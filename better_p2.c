#include <stdio.h>
#include <string.h>

int main() 
{   
    char c1;
    char wrd[100];
    char str[100];

    // Read a character
    scanf(" %c", &c1); // Use a space before %c to consume any leading whitespace

    // Read a word
    scanf("%s", wrd);

    // Clear the input buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    // Read a sentence
    fgets(str, sizeof(str), stdin); //scanf("%[^\n]%*c",string);  this is an alternative.line explained in gptshared chat in tele.

    // Print the values
    printf("Character: %c\n", c1);
    printf("Word: %s\n", wrd);
    printf("Sentence: %s\n", str);

    return 0;
}

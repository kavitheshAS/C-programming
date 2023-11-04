#include <stdio.h>

int main() {
    int asciiCode;

    for (asciiCode = 65; asciiCode <= 90; asciiCode++) {
        printf("%c ", (char)asciiCode);
    }

    printf("\n");

    return 0;
}


#include "student.h"
#include <stdio.h>

int countCharacters(char *str);

int main() {
    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    int len = countCharacters(input);
    if (input[len - 1] == '\n') {
        input[len - 1] = '\0';
        len--;
    }

    printf("Number of characters: %d\n", len);

    author();
    return 0;
}

int countCharacters(char *str) {
    char *ptr = str;
    while (*ptr != '\0') {
        ptr++;
    }
    return ptr - str;
}

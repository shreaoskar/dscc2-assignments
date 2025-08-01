#include <stdio.h>
#include <string.h>
#include "student.h"

void reverseString(char *string);

int main() {
    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    input[stringlength(input)] = '\0';

    reverseString(input);

    author();
    return 0;
}
void reverseString(char *string) {
    unsigned int len = stringlength(string);
    char reversed[len + 1];
    int i;

    for (i = 0; i < len; i++) {
        reversed[i] = string[len - i - 1];
    }
    reversed[len] = '\0';  // null-terminate

    printf("\nInput String: %s", string);
    if (strcmp(string, reversed) == 0)
        printf("\nIs a Palindrome\n");
    else
        printf("\nIs not a Palindrome\n");

    printf("Output String: %s\n", reversed);
}

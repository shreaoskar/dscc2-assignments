#include <stdio.h>
#include "student.h"

void asciiCharacterFrequency(char *string, unsigned int displayColumnCount);

int main() {
    char input[1000];
    unsigned int columns;

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    int i = 0;
    while (input[i] != '\0') {
        if (input[i] == '\n') {
            input[i] = '\0';
            break;
        }
        i++;
    }

    printf("Enter number of columns to display output in: ");
    scanf("%u", &columns);

    asciiCharacterFrequency(input, columns);

    author();
    return 0;
}

void asciiCharacterFrequency(char *string, unsigned int displayColumnCount) {
    if (displayColumnCount < 1) return;
    unsigned int strlen = stringlength(string);
    if (strlen > 0) {
        unsigned int frequency[128] = {0};
        int i, j;
        for (i = 0; i < strlen; i++) {
            char tmp = string[i];
            if (tmp >= 0 && tmp < 128) {
                frequency[(int)tmp]++;
            }
        }
        printf("\nFrequency Table of all ASCII characters with symbols\n");
        printf("Input Text: %s\n", string);
        j = 1;
        for (i = 33; i <= 126; i++) {
            if (frequency[i] > 0) {
                printf("frequency of '%c' is %u", i, frequency[i]);
                if (i == 126) printf(".\n"); else printf(", ");
                if (j % displayColumnCount == 0) printf("\n");
                j++;
            }
        }
        printf("\n");
    } else {
        fprintf(stderr, "\nasciiCharacterFrequency(): Nothing to do...\n");
    }
}

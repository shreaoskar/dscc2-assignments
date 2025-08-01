#include "student.h"
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
int factorial(unsigned int number) {
    if (number <= 1) return 1; else return number * factorial(number - 1);
}

unsigned int stringlength(char *string) {
    unsigned int count = 0;
    while (string[count] != '\0') {count++;};
    return count;
}

void printBinary(unsigned long n) {
    int i;

    if (n > UINT_MAX) {
        for (i = 63; i >= 0; i--) {
            printf("%lu", (n >> i) & 1);
            if (i % 8 == 0 && i != 0) printf(" ");
        } printf("\n");
    } else {
        for(i = 31; i >= 0; i--) {
            printf("%lu", (n >> i) & 1);
            if (i % 8 == 0 && i != 0) printf(" ");
        }
    } printf("\n");
}

void author(void) {
    printf("\n\nProgram Author UID: 1304240002\n");
}

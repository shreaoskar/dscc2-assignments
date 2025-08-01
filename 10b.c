#include <stdio.h>
#include "student.h"

unsigned int setBit(unsigned int num, int bitPosition);

int main() {
    unsigned int number, result;
    int position;

    printf("Enter an integer: ");
    scanf("%u", &number);

    printf("Enter the bit position to set (0-31): ");
    scanf("%d", &position);

    printf("\nOriginal Number in Binary:\n");
    printBinary(number);

    result = setBit(number, position);

    printf("\nAfter Setting Bit %d:\n", position);
    printBinary(result);

    author();
    return 0;
}

unsigned int setBit(unsigned int num, int bitPosition) {
    return num | (1 << bitPosition);
}
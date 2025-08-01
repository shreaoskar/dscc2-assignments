#include <stdio.h>
#include "student.h"

unsigned int toggleBit(unsigned int num, int bitPosition);

int main() {
    unsigned int number, result;
    int position;

    printf("Enter an integer: ");
    scanf("%u", &number);

    printf("Enter the bit position to toggle (0-31): ");
    scanf("%d", &position);

    printf("\nOriginal Number in Binary:\n");
    printBinary(number);

    result = toggleBit(number, position);

    printf("\nAfter Toggling Bit %d:\n", position);
    printBinary(result);

    author();
    return 0;
}

unsigned int toggleBit(unsigned int num, int bitPosition) {
    return num ^ (1 << bitPosition);
}
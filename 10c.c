#include <stdio.h>
#include "student.h"

int main() {
    unsigned int x, result;
    int n;

    printf("Enter a positive integer (x): ");
    scanf("%u", &x);

    printf("Enter the power of 2 (n): ");
    scanf("%d", &n);

    result = x << n;

    printf("\nBinary representation of x:\n");
    printBinary(x);

    printf("\nBinary representation of x * 2^%d:\n", n);
    printBinary(result);

    printf("\nDecimal Result: %u\n", result);

    author();
    return 0;
}
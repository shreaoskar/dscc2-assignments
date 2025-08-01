#include "student.h"
#include <stdio.h>

long power(int x, int y);

int main() {
    int base, exponent;
    long result;

    printf("Enter base (x): ");
    scanf("%d", &base);

    printf("Enter exponent (y): ");
    scanf("%d", &exponent);

    if (exponent < 0) {
        printf("This program supports only non-negative exponents.\n");
        
        author();
        return 1;
    }

    result = power(base, exponent);

    printf("%d^%d = %ld\n", base, exponent, result);

    author();
    return 0;
}

long power(int x, int y) {
    if (y == 0) {
        return 1; // Base case: any number to the power 0 is 1
    } else {
        return x * power(x, y - 1); // Recursive case
    }
}

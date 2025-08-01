#include "student.h"
#include <stdio.h>

typedef struct {
    int real;
    int imag;
} complexNumber;

complexNumber additionComplex(complexNumber a, complexNumber b);

int main() {
    complexNumber num1, num2, sum;

    printf("Enter real and imaginary part of first complex number: ");
    scanf("%d %d", &num1.real, &num1.imag);

    printf("Enter real and imaginary part of second complex number: ");
    scanf("%d %d", &num2.real, &num2.imag);

    sum = additionComplex(num1, num2);

    printf("Sum = %d + %di\n", sum.real, sum.imag);

    author();
    return 0;
}

complexNumber additionComplex(complexNumber a, complexNumber b) {
    complexNumber result = {.real = a.real + b.real, .imag = a.imag + b.imag};
    return result;
}

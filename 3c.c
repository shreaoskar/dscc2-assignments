#include <stdio.h>
#include "shreaoskar.h"

unsigned int factorial(unsigned int num);

int main(int argc, char **argv) {
    intro(argv[0]);
    unsigned int n, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if (sum == n)
        printf("%d is a Krishnamurthy number.", n);
    else
        printf("%d is not a Krishnamurthy number.", n);

    author();
    return 0;
}

unsigned int factorial(unsigned int n) {
    if (n <= 1) {return 1;} else {return n * factorial(n - 1);}
}

#include "student.h"
#include <stdio.h>

int isPrime(int num);

int main() {
    int n, i;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("There are no prime factors for numbers less than or equal to 1.\n");
        author();
        return 1;
    }

    printf("Prime factors of %d are: ", n);

    for (i = 2; i <= n; i++) {
        while (n % i == 0 && isPrime(i)) {
            printf("%d ", i);
            n = n / i;
        }
    }

    printf("\n");

    author();
    return 0;
}

int isPrime(int num) {
    int i;

    if (num <= 1) {
        return 0; // 0 and 1 are not prime
    }

    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }

    return 1; // Prime
}

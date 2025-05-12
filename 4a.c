#include <stdio.h>
#include <math.h>
#include "shreaoskar.h"

int main(int argc, char **argv) {
    intro(argv[0]);
    int x, n, iterator;
    double sum = 0;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (iterator = 0; iterator < n; iterator++) {
        sum += pow(x, iterator);
    }

    printf("Sum of the series S = 1 + x + x^2 + ... up to %d terms is: %.2lf", n, sum);

    author();
    return 0;
}

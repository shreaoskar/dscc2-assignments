#include <stdio.h>
#include <math.h>

int main() {
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
    return 0;
}

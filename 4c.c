#include <stdio.h>

int main() {
    int n;
    double x, sum = 1.0;
    double term = 1.0;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        term = term * x / i;
        sum += term;
    }

    printf("The summation of the series for e^%.2lf up to %d terms is: %.3lf", x, n, sum);
    return 0;
}

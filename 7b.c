#include <stdio.h>
#include "student.h"

long nCr(int n, int r);

int main() {
    int n, r;
    long result;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter value of r: ");
    scanf("%d", &r);

    if(n < 0 || r < 0 || r > n) {
        printf("Invalid input. Ensure that 0 <= r <= n.\n");
        
        author();
        return 1;
    }

    result = nCr(n, r);
    printf("nCr (%dC%d) = %ld\n", n, r, result);

    author();
    return 0;
}

long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

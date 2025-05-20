#include <stdio.h>

int main() {
    int n, iterator;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (iterator = 1; iterator <= n; iterator++) {
        sum += (iterator * (iterator + 1)) / 2;
    }

    printf("The sum of the series is: %d", sum);
    return 0;
}

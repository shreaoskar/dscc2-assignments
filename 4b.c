#include <stdio.h>
#include "shreaoskar.h"

int main(int argc, char **argv) {
    intro(argv[0]);
    int n, iterator;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (iterator = 1; iterator <= n; iterator++) {
        sum += (iterator * (iterator + 1)) / 2;
    }

    printf("The sum of the series is: %d", sum);

    author();
    return 0;
}

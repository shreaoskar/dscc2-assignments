#include "shreaoskar.h"
#include <stdio.h>

int main(int argc, char **argv) {
    intro(argv[0]);
    int i, j, space, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }

        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    author();
    return 0;
}

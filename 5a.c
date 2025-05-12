#include "shreaoskar.h"
#include <stdio.h>

int main(int argc, char **argv) {
    intro(argv[0]);
    int i, j, n, num = 1;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }

    author();
    return 0;
}

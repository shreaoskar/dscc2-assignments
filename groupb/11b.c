#include <stdio.h>
#include <stdlib.h>
#include <threads.h>
int main() {
    int *arr;
    int rows, columns;
    int i, j;

    printf("Enter the rows, and columns: ");
    scanf("%d %d", &rows, &columns);

    if (rows < 1 || columns < 1) {
        fprintf(stderr, "[ ERROR ] Row and Column count cannot be lt 1\n");
        return 1;
    }

    arr = (int *) calloc(rows * columns, sizeof(int));
    if (arr == NULL) {
        fprintf(stderr, "[ ERROR ] Cannot Allocate Memory.\n");
        return 2;
    }

    printf("Enter elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", (arr + i * columns + j));
        }
    }

    printf("\nThe 2D array is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", *(arr + i * columns + j));
        }
        printf("\n");
    }

    free(arr);
    return 0;
}

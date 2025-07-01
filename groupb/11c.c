#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, count, *arr;

    printf("Enter the number of integers: ");
    scanf("%d", &count);

    if (count < 1) {
        fprintf(stderr, "[ ERROR ] Array cannot be of size lt 1\n");
        return 1;
    }

    arr = (int *) calloc(count, sizeof(int));
    if (arr == NULL) {
        fprintf(stderr, "[ ERROR ] Cannot allocate memory\n");
        return 2;
    }

    for (i = 0; i < count; i++) {
        arr[i] = i + 1;
    }

    for (i = 0; i < count; i++) {
        printf("%dth value: %d", i, arr[i]);
        if (i == count - 1) printf("\n"); else printf(", ");
        if ((i % 6 == 0) && i != 0) printf("\n");
    }

    free(arr);
    return 0;
}

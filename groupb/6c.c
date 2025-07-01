#include <stdio.h>
int main() {
    unsigned int count;

    printf("Enter the number of elements: ");
    scanf("%u", &count);

    if (count < 1) {
        fprintf(stderr, "[ ERROR ] Array cannot be of size lt 1\n");
        return 1;
    } else if ( count == 1) {
        fprintf(stderr, "[ USAGE ] Nothing to do in an array of len 1\n");
        return 2;
    }

    int array[count];
    int i, j;

    for (i = 0; i < count; i++) {
        printf("Enter the %dth element: ", i);
        scanf("%d", &array[i]);
    }

    printf("Original Array:\n");
    for (i = 0; i < count; i++) {
        printf("%d: %d  ", i, array[i]);
        if ((i % 10 == 0 && i != 0) || i == count - 1) printf("\n");
    }

    int tmp;
    for (i = 0; i < count - 1; i++) {
        for (j = i + 1; j < count; j++){
            if (array[i] > array[j]) {
                tmp = array[j];
                array[j] = array[i];
                array[i] = tmp;
            }
        }
    }

    printf("\nArray in Descending Order:\n");
    for (i = 0; i < count; i++) {
        printf("%d: %d  ", i, array[i]);
        if ((i % 10 == 0 && i != 0) || i == count - 1) printf("\n");
    }

    printf("\n");
    return 0;
}

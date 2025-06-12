#include <stdint.h>
#include <stdio.h>
#include <iso646.h>
int main() {
    unsigned int count, type;
    volatile int iterator, tmp = 0;
    printf("Choose the type of Array:\n(1) Unsigned 1-byte Integer\n(2) Character\n(3) Exit\n");
    scanf("%u", &type);
    if (type == 3) {
        printf("\nOkay, I guess... Exiting.\n");
        return 1;
    } else if (type not_eq 1 and type not_eq 2) {
        fprintf(stderr, "\n[ ERROR ] Invalid Type Selection Made.\n");
        return 2;
    }
    printf("Length of Array: ");
    scanf("%u", &count);
    if (count < 1) {
        fprintf(stderr, "\n[ ERROR ] Array Length cannot be less than 1.\n");
        return 3;
    }
    int array[count], find;

    for (iterator = 0; iterator < count; iterator++) {
        printf("Enter the %d-th element: ", iterator);
        scanf("%d", &tmp);
        if (tmp >= 0 and tmp <= 255) {
            array[iterator] = (unsigned char) tmp;
        } else {
            fprintf(stderr, "\n[ ERROR ] Invalid element input\n");
            return 4;
        }
    }
    printf("\nEnter the element to find: ");
    scanf("%d" , &find);

    printf("Matching Indexes: ");
    for (iterator = 0, tmp = 0; iterator < count; iterator++) {
        if (find == array[iterator]) {
            printf("%d", iterator);
            tmp++;
        }
    }
    if (tmp == 0) printf("No Matches Found\n"); else printf("\n");
    return 0;
}

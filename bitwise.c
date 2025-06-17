#include <limits.h>
#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
void printBinary(unsigned long n) {
    int i;

    if (n > UINT_MAX) {
        for (i = 63; i >= 0; i--) {
            printf("%lu", (n >> i) & 1);
            if (i % 8 == 0 && i != 0) printf(" ");
        } printf("\n");
    } else {
        for(i = 31; i >= 0; i--) {
            printf("%lu", (n >> i) & 1);
            if (i % 8 == 0 && i != 0) printf(" ");
        }
    } printf("\n");
}

void bitwiseOperator(const char option) {
    unsigned int n, p;

    printf("Enter an integer (n): ");
    scanf("%u", &n);

    unsigned int mask;
    unsigned int result;
    switch (option) {
        case 'A':
        case 'a':
            printf("Enter bit position to toggle (0-based index, 0 = LSB): ");
            scanf("%u", &p);
            mask = 1 << p;
            result= n ^ mask; /* bitwise xor */
            break;
        case 'B':
        case 'b':
            printf("Enter bit position to set (0-based index, 0 = LSB): ");
            scanf("%u", &p);
            mask = 1 << p;
            result = n | mask; /* bitwise or */
            break;
        case 'C':
        case 'c':
            printf("Enter bit position to clear (0-based index, 0 = LSB): ");
            scanf("%u", &p);
            mask = 1 << p;
            result = n & ~mask; /* bitwise and */
            break;
        default:
        fprintf(stderr, "\n[ ERROR ] Invalid option\n");
        exit(2);
    }

    printf("Original number in binary: ");
    printBinary(n);

    printf("Modified number in binary: ");
    printBinary(result);
}

void x2n(unsigned int x, unsigned int n) {
    printf("Original number in binary: ");
    printBinary(x);
    uint64_t result = (uint64_t)x << n;
    printf("Modified number in binary: ");
    printBinary(result);
}

void xby2n(unsigned int x, unsigned int n) {
    printf("Original number in binary: ");
    printBinary(x);
    unsigned int result = x >> n;
    printf("Modified number in binary: ");
    printBinary(result);
}

int main() {
    /*bitwiseOperator('c');*/
    xby2n(2324532526, 2);
    return 0;
}

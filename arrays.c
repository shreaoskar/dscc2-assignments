#include <math.h>
#include <stdio.h>
#include <iso646.h>
#include <stdbool.h>
#include <sys/cdefs.h>

void linearArraySearch(int array[], unsigned int count, int number) {
    int iterator, tmp = 0;
    printf("\nMatching Indexes: ");
    for (iterator = 0; iterator < count; iterator++) {
        if (number == array[iterator]) {
            printf("%d ", iterator);
            tmp++;
        }
    }
    if (tmp == 0) printf("No Matches Found\n"); else printf("\n");
}

typedef struct{
    int *odd;
    int *even;
    unsigned int count;
}separatedArrayElements;

separatedArrayElements separatedOddElements(int array[], separatedArrayElements arrays, unsigned int count) {
    int iterator, j = 0;
    for (iterator = 0; iterator < count; iterator += 2, j++) {
        arrays.even[j] = array[iterator];
    }
    j = 0;
    for (iterator = 1; iterator < count; iterator += 2, j++) {
        arrays.odd[j] = array[iterator];
    }
    arrays.count = count / 2;
    return arrays;
}

void descendingArray(int array[], unsigned int count) {
    int i, j, tmp;
    for (i = 0; i < count - 1; i++) {
        for (j = 1; j < count; j++) {
            if (array[i] < array[j]) {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}

int factorial(unsigned int number) {
    if (number <= 1) return 1; else return number * factorial(number - 1);
}
/*  n^Cr = n! / (r! * (n-r)!) */
int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

bool isPrime(unsigned int number) {
    int count = 0, i;
    for (i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) count++;
    }
    if (count == 0) return true; else return false;
}

void primeFactors(unsigned int number) {
    int count = 0, i;
    printf("Prime Factors of %d: ", number);
    for (i = 2; i <= sqrt(number); i++) {
        if (isPrime(i) and (number % i == 0)) {
            printf("%d ", i);
            count++;
        }
    }
    if (count == 0) printf("No Match Found\n"); else printf("\n");
}

void perfectNumbers(unsigned int lowerBound, unsigned int upperBound) {
    if (lowerBound < 2) lowerBound = 2;
    int count = 0, i, j;
    printf("\nPerfect Numbers in the range [%d,%d]: ", lowerBound, upperBound);
    for (i = lowerBound; i <= upperBound; i++) {
        int sum = 0;
        for (j = 1; j < (i/2) + 1; j++) {
            if (i % j == 0) sum += j;
        }
        if (sum == i) {
            printf("%d ", i);
            count++;
        }
    }
    if (count == 0) printf("No Perfect Numbers Found\n"); else printf("\n");
}

double exponent(int x, int y) {
    if (y == 0) return 1;
    if (y < 0) return 1 / exponent(x, -y);
    return x * exponent(x, y - 1);
}

int gcd(int x, int y) {
    int di, i;
    if (x < y) di = x; else di = y;
    for (i = di; i > 0; i--) {
        if (x % i == 0 and y % i == 0) return i;
    }
    return 0;
}

void swapNumbers(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int charCount(char *str) {
    int count = 0;
    char *string = str;
    while(*string != '\0') {
        if (*string != ' ') {count++;}
        string++;}
    return count;
}

void pptopptoint(int *p) {
    int **pp = &p;
    if (**pp != 69) **pp = 69; else **pp = 420;
}

typedef struct {
    int real;
    int imag;
} complexNumber;

complexNumber additionComplex(complexNumber a, complexNumber b) {
    complexNumber result = {.real = a.real + b.real, .imag = a.imag + b.imag};
    return result;
}

int main() {
    return 0;
}

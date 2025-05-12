#include <math.h>
#include <stdio.h>
#include "shreaoskar.h"

unsigned int count_digit(int number);

int main(int argc, char **argv) {
    intro(argv[0]);
    int number, count, tmp, x, y;
    printf("Enter your number: ");
    scanf("%d", &number);
    count = count_digit(number);
    tmp = number;

    while (tmp != 0) {
        x = tmp % 10;
        y += pow((double)x, count);
        tmp /= 10;
    }

    if (y == number) {
        printf("Your number is an Armstrong!");
    } else {
        printf("Your number is not an Armstrong.");
    }

    author();
    return 0;
}

unsigned int count_digit(int number) {
  unsigned int count = 0;
  do {
    number /= 10;
    ++count;
  } while (number > 0);

  return count;
}

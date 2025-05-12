#include <stdio.h>
#include "shreaoskar.h"

int main(int argc, char **argv) {
    intro(argv[0]);
    float side1, side2, side3;

    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    if ((side1 + side2 > side3) &&
        (side2 + side3 > side1) &&
        (side3 + side1 > side2)) {
        if (side1 == side2 && side2 == side3) {
            printf("The triangle is Equilateral.");
        } else if (side1 == side2 || side2 == side3 || side3 == side1) {
            printf("The triangle is Isosceles.");
        } else {
            printf("The triangle is Scalene.");
        }
    } else {
        printf("The given sides do not form a valid triangle.");
    }

    author();
    return 0;
}

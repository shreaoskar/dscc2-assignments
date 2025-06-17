#include <stdio.h>

float billCalc(unsigned int *count, unsigned int number, float rate) {
    float bill = 0;

    if (count != 0) {
        if (*count >= number) {
            bill += number * rate;
            *count -= number;
        } else {
            bill += *count * rate;
            *count = 0;
        }
    } else return 0.0;

    return bill;
}
int main() {
    unsigned int count;
    float bill;
    printf("Enter the number of Telephone Calls\n> ");
    scanf("%u", &count);

    if (count != 0) bill = billCalc(&count, 150, 2.00);
    if (count != 0) bill += billCalc(&count, 50, 1.50);
    if (count != 0) bill += billCalc(&count, 100, 1.00);
    if (count != 0) bill += billCalc(&count, 200, 0.75);
    if (count != 0) bill += count * 0.50;

    printf("Total Bill Amount: Rs. %.2f\n", bill);
    return 0;
}

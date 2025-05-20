#include <stdio.h>

int main() {
    int a, b;
    printf("\nEnter two numbers: ");
    scanf("%d%d", &a, &b);

    int operation;
    printf("\nOperation to perform: [Enter the number beside the option you "
             "require]\n(1) Addition\n(2) Subtraction\n(3) Multiplication\n(4) "
             "Division\n(5) Modulus\n");
    scanf("%d", &operation);

    int result;
    switch (operation) {
        case 1:
            result = a + b;
            break;
        case 2:
            result = a - b;
            break;
        case 3:
            result = a * b;
            break;
        case 4:
            result = a / b;
            break;
        case 5:
            result = a % b;
            break;
        default:
            printf("\n[ ERROR ] Operation Choice Invalid\n");
            return 1;
    };

    printf("\nResult: %d", result);
    return 0;
}

#include <ctype.h>
#include <stdio.h>

int main() {
    int temperature_in, temperature_out;
    char option;

    printf("Enter Your Temperature: ");
    scanf("%d", &temperature_in);

    printf("Enter the Scale to convert to; [C]elsius/[F]ahrenheit: ");
    scanf(" %c", &option);

    option = toupper(option);
    if (option == 'C') {
        temperature_out = ( temperature_in - 32) * 5 / 9;
    } else if (option == 'F') {
        temperature_out = (temperature_in * 9 / 5 ) + 32;
    } else {
        fprintf(stderr, "\n[ ERROR ] Invalid Scale Option\n");
        return 1;
    }

    printf("Output Temperature in %c: %d", option, temperature_out);
    return 0;
}

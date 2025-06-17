#include <stdio.h>
int main() {
    char string[1024];
    printf("Enter your String: ");
    scanf("%[^\n]s", string);

    unsigned int len = 0;
    while (string[len] != '\0') len++;
    printf("length of string: %d\n", len);

    int i;
    for (i = 0; i < len; i++) {
        if (string[i] == ' ' && string [i + 1] == ' ') continue;
        printf("%c", string[i]);
    }
    printf("\n");
    return 0;
}

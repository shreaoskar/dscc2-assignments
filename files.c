#include <ctype.h>
#include <stdio.h>
#define MAX 1024

int main() {
    FILE *src, *dest;
    char sourceFile[1024], destFile[1024];
    int ch;

    printf("Name of source file: ");
    scanf("%s", sourceFile);

    printf("Name of destination file: ");
    scanf("%s", destFile);

    src = fopen(sourceFile, "r");
    if (src == NULL) {
        fprintf(stderr, "Error opening source file\n");
        return 1;
    }

    dest = fopen(destFile, "w");
    if (dest == NULL) {
        fprintf(stderr, "\nError opening destination file\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(toupper(ch), dest);
    }

    printf("File converted successfully\n");

    fclose(src);
    fclose(dest);

    return 0;
}

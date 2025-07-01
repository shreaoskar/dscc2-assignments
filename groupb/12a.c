#include <locale.h>
#include <stdio.h>
#include <wchar.h>
#include <wctype.h>
int main(int argc, char **argv) {
    if (argc != 3) {
        fwprintf(stderr, L"[ ERROR ] Wrong Usage.\n[ USAGE ] %s <input_file> <output_file>\n", argv[0]);
        return 666;
    }
    FILE *src, *dest;
    unsigned int characters = 0, words = 0, lines = 0;
    int in_word = 0;
    wint_t ch;

    setlocale(LC_ALL, "");

    src = fopen(argv[1], "r");
    if (src == NULL) {
        fprintf(stderr, "[ ERROR ] Cannot Open Input File.\n");
        return 1;
    }

    dest = fopen(argv[2], "w");
    if (dest == NULL) {
        fprintf(stderr, "[ ERROR ] Cannot Open Output File.\n");
        fclose(src);
        return 2;
    }

    while((ch = fgetwc(src)) != WEOF) {
        characters++;

        if (ch == L'\n') lines++;

        if (iswspace(ch)) {
            in_word = 0;
        } else if (!in_word) {
            words++;
            in_word = 1;
            }
    }

    fwprintf(dest, L"Characters: %u\n", characters);
    fwprintf(dest, L"Words: %u\n", words);
    fwprintf(dest, L"Lines: %u\n", lines);

    wprintf(L"Task Complete. Output written to %s\n", argv[2]);


    fclose(src);
    fclose(dest);
    return 0;
}

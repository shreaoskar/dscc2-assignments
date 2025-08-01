#include <stdio.h>
#include <stdbool.h>
#include "student.h"

#define MAX_LEN 1000

void string_search_replace(char string[], char* word, char* replacement);

int main() {
    char input[MAX_LEN], word[100], replacement[100];

    printf("Enter a string:\n");
    fgets(input, sizeof(input), stdin);

    unsigned int len = stringlength(input);
    if (input[len - 1] == '\n') input[len - 1] = '\0';

    printf("Enter the word to search: ");
    scanf("%s", word);

    printf("Enter the replacement word (same length): ");
    scanf("%s", replacement);

    string_search_replace(input, word, replacement);
    
    author();
    return 0;
}

void string_search_replace(char string[], char* word, char* replacement) {
    if (!string || !word || !replacement) {
        fprintf(stderr, "string_search_replace(): NULL pointer input.\n");
        return;
    }

    unsigned int len_string, len_word, len_replacement, matches = 0;
    int i, j, k;
    len_string = stringlength(string);
    len_word = stringlength(word);
    len_replacement = stringlength(replacement);
    if (len_string < 1 || len_word < 1 || len_replacement < 1) {
        fprintf(stderr, "\nstring_search_replace(): Nothing to do...\n");
        return;
    } else if (len_word != len_replacement) {
        fprintf(stderr, "\nstring_search_replace(): Implementation not found\nscenario -> length of original word and replacement word not equal\n");
        return;
    }
    printf("\nGiven String: %s\nGiven Word: %s, Given Replacement: %s\n", string, word, replacement);
    for (i = 0; i <= len_string - len_replacement; i++) {
        bool check = false;
        int tmp_string;
        for (j = 0; j < len_word; j++) {
            int tmp_word = word[j];
            tmp_string = string[i + j];
            if (tmp_string == tmp_word) check = true; else {check = false; break;}
        }
        if (check) {
            for (k = 0; k < len_replacement; k++) {
                char tmp_replacement = replacement[k];
                string[i + k] = tmp_replacement;
            }
            matches++;
            i += len_replacement - 1;
        }
    }
    if (matches == 0) {
        fprintf(stderr, "\nstring_search_replace(): No Matches Found\n");
    } else printf("Resultant String: %s\nNo of Matches: %u\n", string, matches);
}

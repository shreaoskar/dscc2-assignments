#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
unsigned int stringlength(char *string) {
    unsigned int count = 0;
    while (string[count] != '\0') {count++;};
    return count;
}

void asciiCharacterFrequency(char *string, unsigned int displayColumnCount) {
    if (displayColumnCount < 1) return;
    unsigned int strlen = stringlength(string);
    if (strlen > 0) {
        unsigned int frequency[128] = {0};
        int i, j;
        for (i = 0; i < strlen; i++) {
            char tmp = string[i];
            frequency[tmp]++;
        }
        printf("\nFrequency Table of all ASCII characters with symbols\n");
        printf("Input Text: %s\n", string);
        j = 1;
        for (i = 33; i <= 126; i++) {
            printf("frequency of %c is %u",
                i, frequency[i]);
            if (i == 126) printf(".\n"); else printf(", ");
            if (j % displayColumnCount == 0) printf("\n");
            j++;
        }
    } else fprintf(stderr, "\nasciiCharacterFrequency(): Nothing to do...\n");
}

void string_search_replace(char string[], char* word, char* replacement) {
    if (!string || !word || !replacement) {
        fprintf(stderr, "string_search_replace(): NULL pointer input.\n");
        return;
    }

    unsigned int len_string, len_word, len_replacement, matches = 0;
    int i , j, k;
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

void printInitials(char name[]) {
    unsigned int len = stringlength(name);
    if (len == 0) {
        fprintf(stderr, "\nprintInitials(): 0 length Name Entry. Nothing to do...\n");
        return;
    }
    int i;
    unsigned int surname_count = 0;

    if (name[len] == ' ') len -= 1;
    for (i = 0; i < len; i++) {
        if (name[i] == ' ') surname_count = len - i - 1;
    }
    if (surname_count == 0) {
        fprintf(stderr, "\nprintInitials(): Mononym Name Entry. Nothing to do...\n");
        return;
    }
    char surname[surname_count];
    for (i = 0; i < surname_count; i++) {
        surname[i] = tolower(name[(len - surname_count) + i]);
        if (i == surname_count - 1) surname[i + 1] = '\0';
    }
    surname[0] = toupper(surname[0]);

    printf("%c. ", toupper(name[0]));
    for (i = 1; i < len - surname_count; i++) {
        if (name[i - 1] == 32) printf("%c. ", toupper(name[i]));
    }
    printf("%s\n", surname);
}

void reverseString(char *string) {
    unsigned int len = stringlength(string);
    char reversed[len];
    int i;
    if (len % 2 != 0) reversed[(len / 2) + 1] = string[(len / 2) + 1];
    for (i = 0; i < len; i++) {
        reversed[i] = string[len - i - 1];
    }
    reversed[len + 1] = '\0';
    printf("\nInput String: %s", string);
    if (strcmp(string, reversed) == 0) printf("\nIs a Palindrome\n"); else printf("\nIs not a Palindrome\n");
    printf("Output String: %s\n", reversed);
}

int main() {
    char *string = "stella";
    reverseString(string);
    return 0;
}

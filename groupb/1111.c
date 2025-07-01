#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    FILE *infile, *outfile;
    int ch, characters = 0, words = 0, lines = 0;
    int in_word = 0;

    // Check if file names are provided
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <input_file> <output_file>\n", argv[0]);
        return 1;
    }

    // Open input file
    infile = fopen(argv[1], "r");
    if (infile == NULL) {
        perror("Error opening input file");
        return 1;
    }

    // Open output file
    outfile = fopen(argv[2], "w");
    if (outfile == NULL) {
        perror("Error opening output file");
        fclose(infile);
        return 1;
    }

    // Read character by character
    while ((ch = fgetc(infile)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        if (isspace(ch))
            in_word = 0;
        else if (!in_word) {
            words++;
            in_word = 1;
        }
    }

    // Write results to output file
    fprintf(outfile, "Characters: %d\n", characters);
    fprintf(outfile, "Words: %d\n", words);
    fprintf(outfile, "Lines: %d\n", lines);

    printf("Analysis complete. Output written to %s\n", argv[2]);

    // Close files
    fclose(infile);
    fclose(outfile);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 1048576  // 2^20

void caesar_cipher_decoder(char *input, char *output, short stride);

int main(int argc, char **argv) {
    char input[MAX_SIZE];
    char output[MAX_SIZE];

    if (argc != 2) {
        fprintf(stderr, "format error\nusage: %s <stride>\n", argv[0]);
        exit(1);
    }

    while (fgets(input, MAX_SIZE, stdin) != NULL) {
        if (input[strlen(input) - 1] == '\n') {
            input[strlen(input) - 1] =  '\0';
        }
        caesar_cipher_decoder(input, output, atoi(argv[1]));
    }
    printf("%s\n", output);
    return 0;
}

void caesar_cipher_decoder(char *input, char *output, short stride) {
    char *inptr, *outptr;

    inptr = input;
    outptr = output;

    while (*inptr) {
        *outptr++ = ((*inptr++) - 32 - stride) % 95 + 32;
    }
}

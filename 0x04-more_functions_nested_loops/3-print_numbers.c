#include <unistd.h>
#include "main.h"

/**
 * print_numbers - writes a lsit of input characters
 * @c: the character to print
 *
 */

#include <stdio.h>

void print_numbers(void) {
    char num_chars[] = "0123456789\n";
    int i;
    for (i = 0; i < 11; i++) {
        _putchar(num_chars[i]);
    }
}

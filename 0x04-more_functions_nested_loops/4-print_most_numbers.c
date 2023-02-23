#include <unistd.h>
#include "main.h"
/*
 *
 *print_most numbers
 *
 */

#include <stdio.h>

void print_most_numbers(void) {
    char num_chars[] = "01356789\n";
    int i;
    for (i = 0; i < 9; i++) {
        _putchar(num_chars[i]);
    }
}

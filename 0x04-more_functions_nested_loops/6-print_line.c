#include "main.h"

/**
 * print_line - prints a straight line of length n in the terminal
 *
 * @n: the length of the line to be printed
 */
void print_line(int n)
{
    if (n <= 0) {
        _putchar('\n');
    } else {
        int i;

        for (i = 0; i < n; i++) {
            _putchar('_');
        }
        _putchar('\n');
    }
}

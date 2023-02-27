#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a newline
 * @s: The string to print
 */
void print_rev(char *s)
{
        int i = 0;
        int length = 0;

        /* Find the length of the string */
        while (s[length] != '\0')
                length++;

        /* Print the string in reverse */
        for (i = length - 1; i >= 0; i--)
                _putchar(s[i]);

        _putchar('\n');
}

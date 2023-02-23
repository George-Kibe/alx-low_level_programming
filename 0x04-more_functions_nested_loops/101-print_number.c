#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 */

void print_number(int n)
{
    int digits = 1, divisor = 1, i, digit_value;

    if (n < 0) {
        _putchar('-');
        n *= -1;
    }

    while ((n / divisor) >= 10) {
        digits++;
        divisor *= 10;
    }

    for (i = 0; i < digits; i++) {
        digit_value = (n / divisor) % 10;
        if (digit_value < 0)
            digit_value *= -1;
        _putchar(digit_value + '0');
        divisor /= 10;
    }
}

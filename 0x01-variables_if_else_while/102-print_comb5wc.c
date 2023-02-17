#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void) {
    int i, j, x, y;
    for (i = 0; i <= 99; i++) {
        x = i / 10; // first digit of i
        y = i % 10; // second digit of i
        for (j = i; j <= 99; j++) {
            if (j == i) {
                continue; // skip the case where the two numbers are the same
            }
            putchar(x + 48); // print first digit of i
            putchar(y + 48); // print second digit of i
            putchar(' '); // print space
            if (j < 10) {
                putchar('0'); // print leading zero for single-digit number
            }
            putchar(j / 10 + 48); // print first digit of j
            putchar(j % 10 + 48); // print second digit of j
            if (i < 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
    return 0;
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void) {
    int i, j, x, y;
    for (i = 0; i <= 99; i++) {
        x = i / 10;
        y = i % 10; 
        for (j = i; j <= 99; j++) {
            if (j == i) {
                continue;
            }
            putchar(x + 48); 
            putchar(y + 48); 
            putchar(' '); 
            putchar(j / 10 + 48); 
            putchar(j % 10 + 48); 
            if (i < 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
    return 0;
}

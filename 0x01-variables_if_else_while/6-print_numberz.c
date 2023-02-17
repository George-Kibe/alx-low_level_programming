#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void) {
    int n = 10;
    int i;
    for (i=0; i<n; i++){
        putchar('0' + i);
    }
    putchar('\n');
    return 0;
}

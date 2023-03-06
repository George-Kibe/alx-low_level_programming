#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a: pointer to the first element of the matrix
 * @size: size of the square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
    int i, j, sum1 = 0, sum2 = 0;
    
    for (i = 0; i < size; i++) {
        sum1 += *(a + (i * size) + i);
        sum2 += *(a + (i * size) + (size - i - 1));
    }
    
    /* Print the sums without using printf */
    char buf[20];
    int len = 0, n;
    if (sum1 < 0) {
        _putchar('-');
        sum1 = -sum1;
    }
    n = sum1;
    do {
        buf[len++] = (n % 10) + '0';
        n /= 10;
    } while (n > 0);
    while (len-- > 0) {
        _putchar(buf[len]);
    }
    _putchar(',');
    _putchar(' ');
    len = 0;
    if (sum2 < 0) {
        _putchar('-');
        sum2 = -sum2;
    }
    n = sum2;
    do {
        buf[len++] = (n % 10) + '0';
        n /= 10;
    } while (n > 0);
    while (len-- > 0) {
        _putchar(buf[len]);
    }
    _putchar('\n');
}
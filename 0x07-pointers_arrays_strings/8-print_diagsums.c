#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a: pointer to the first element of the matrix
 * @size: size of the square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size) {
    int i, j, sum1 = 0, sum2 = 0;
    char str1[] = "Diagonal sum 1: ";
    char str2[] = "Diagonal sum 2: ";
    int len1 = sizeof(str1) - 1;
    int len2 = sizeof(str2) - 1;
    int sum1_copy = sum1, sum2_copy = sum2;
    char buf1[100];
    char buf2[100];

    for (i = 0; i < size; i++) {
        sum1 += *(a + i * size + i);
        sum2 += *(a + i * size + (size - i - 1));
    }
    while (sum1_copy > 0) {
        len1++;
        sum1_copy /= 10;
    }
    while (sum2_copy > 0) {
        len2++;
        sum2_copy /= 10;
    }
    sprintf(buf1, "%d", sum1);
    sprintf(buf2, "%d", sum2);

    for (j = 0; j < len1; j++) {
        putchar(str1[j]);
    }
    for (j = 0; j < len2; j++) {
        putchar(str2[j]);
    }
    putchar('\n');
}

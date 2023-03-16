#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _isdigit(char *s);
void _mul(char *num1, char *num2);

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
    {
        printf("Error\n");
        return (98);
    }

    _mul(argv[1], argv[2]);

    return (0);
}

/**
 * _isdigit - Check if a string is composed of digits
 * @s: The string to check
 *
 * Return: 1 if the string is composed of digits, 0 otherwise
 */
int _isdigit(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] < '0' || s[i] > '9')
            return (0);
        i++;
    }

    return (1);
}

/**
 * _mul - Multiply two numbers and print the result
 * @num1: The first number
 * @num2: The second number
 */
void _mul(char *num1, char *num2)
{
    int len1, len2, i, j, k, n, *res;

    len1 = strlen(num1);
    len2 = strlen(num2);

    res = calloc(len1 + len2, sizeof(int));

    for (i = len1 - 1; i >= 0; i--)
    {
        n = num1[i] - '0';

        for (j = len2 - 1; j >= 0; j--)
        {
            res[i + j + 1] += n * (num2[j] - '0');
        }
    }

    for (k = len1 + len2 - 1; k >= 0; k--)
    {
        if (res[k] > 9)
        {
            res[k - 1] += res[k] / 10;
            res[k] %= 10;
        }
    }

    for (k = 0; k < len1 + len2; k++)
    {
        if (res[k] != 0 || k == len1 + len2 - 1)
            break;
    }

    for (; k < len1 + len2; k++)
    {
        printf("%d", res[k]);
    }
    printf("\n");

    free(res);
}

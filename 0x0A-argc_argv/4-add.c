#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
        int i, sum = 0;

        /* Check if no arguments */
        if (argc == 1)
        {
                printf("0\n");
                return (0);
        }

        /* Iterate through arguments */
        for (i = 1; i < argc; i++)
        {
                int j, num = 0;

                /* Check if argument is a positive number */
                for (j = 0; argv[i][j]; j++)
                {
                        if (!isdigit(argv[i][j]))
                        {
                                printf("Error\n");
                                return (1);
                        }
                        num = num * 10 + (argv[i][j] - '0');
                }

                /* Add number to sum */
                sum += num;
        }

        /* Print sum */
        printf("%d\n", sum);

        return (0);
}


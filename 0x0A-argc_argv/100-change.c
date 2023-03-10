#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	/* check the number of arguments */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* convert the argument to an integer */
	cents = atoi(argv[1]);

	/* check if the number is negative */
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	/* calculate the number of coins needed */
	while (cents >= 25)
	{
		coins++;
		cents -= 25;
	}
	while (cents >= 10)
	{
		coins++;
		cents -= 10;
	}
	while (cents >= 5)
	{
		coins++;
		cents -= 5;
	}
	while (cents >= 2)
	{
		coins++;
		cents -= 2;
	}
	while (cents >= 1)
	{
		coins++;
		cents -= 1;
	}

	/* print the result */
	printf("%d\n", coins);
	return (0);
}
#include "main.h"

/**
 * is_prime_helper - checks if a number is prime recursively
 * @n: the number to check if it's prime
 * @i: the current divisor to check if it divides n evenly
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
    if (n < 2)
        return (0);
    if (i * i > n)
        return (1);
    if (n % i == 0)
        return (0);
    return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check if it's prime
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
    return (is_prime_helper(n, 2));
}

#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The size of the memory block to allocate
 *
 * Return: A pointer to the allocated memory block
 *         If malloc fails, terminate the program with exit status 98
 */
void *malloc_checked(unsigned int b)
{
    void *ptr;

    ptr = malloc(b);
    if (ptr == NULL)
    {
        printf("Error: malloc failed\n");
        exit(98);
    }

    return (ptr);
}

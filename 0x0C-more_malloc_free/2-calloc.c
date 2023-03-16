#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in bytes.
 *
 * Return: A pointer to the allocated and initialized memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *mem_ptr;
    unsigned int i;

    if (nmemb == 0 || size == 0)
        return (NULL);

    mem_ptr = malloc(nmemb * size);
    if (mem_ptr == NULL)
        return (NULL);

    /* Set memory to zero */
    for (i = 0; i < nmemb * size; i++)
        *((char *)mem_ptr + i) = 0;

    return (mem_ptr);
}

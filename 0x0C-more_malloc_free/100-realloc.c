#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated with malloc().
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: A pointer to the reallocated memory block, or NULL if new_size is
 *         zero and ptr is not NULL, or if malloc() fails.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;

    if (new_size == 0)
    {
        free(ptr);
        return (NULL);
    }

    if (ptr == NULL)
        return (malloc(new_size));

    if (new_size <= old_size)
        return (ptr);

    new_ptr = malloc(new_size);
    if (new_ptr == NULL)
        return (NULL);

    memcpy(new_ptr, ptr, old_size);
    free(ptr);

    return (new_ptr);
}

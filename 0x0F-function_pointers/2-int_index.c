#include <stddef.h>

/**
 * int_index - searches for an integer in an array
 *
 * @array: the array to search
 * @size: the size of the array
 * @cmp: a pointer to the comparison function to be used
 *
 * Return: the index of the first element for which the cmp function
 * does not return 0, or -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;
    if (array == NULL || cmp == NULL || size <= 0) /* validate inputs */
        return (-1);

    for (i = 0; i < size; i++)
    {
        if (cmp(array[i]) != 0) /* call the comparison function on each element */
            return (i); /* return the index if the function returns non-zero */
    }

    return (-1); /* no match found */
}

#include <stddef.h>

/**
 * array_iterator - executes a given function on each element of an array
 *
 * @array: the array to iterate over
 * @size: the size of the array
 * @action: a pointer to the function to be executed on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;
    if (array != NULL && action != NULL) /* validate inputs */
    {
        for (i = 0; i < size; i++)
        {
            action(array[i]); /* call the function on each element of the array */
        }
    }
}

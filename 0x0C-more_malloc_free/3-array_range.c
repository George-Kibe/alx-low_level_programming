#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value of the array.
 * @max: The maximum value of the array.
 *
 * Return: A pointer to the newly created array, or NULL on failure.
 */
int *array_range(int min, int max)
{
    int *arr;
    int i, j;

    if (min > max)
        return (NULL);

    arr = malloc((max - min + 1) * sizeof(int));
    if (arr == NULL)
        return (NULL);

    for (i = min, j = 0; i <= max; i++, j++)
        arr[j] = i;

    return (arr);
}

/**
 * swap_int - Swaps the values of two integers.
 * @a: A pointer to the first integer.
 * @b: A pointer to the second integer.
 *
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
    int tmp;

    if (a != 0 && b != 0)
    {
        tmp = *a;
        *a = *b;
        *b = tmp;
    }
}

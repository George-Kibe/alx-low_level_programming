/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array of integers to be reversed
 * @n: the number of elements in the array
 *
 * Description: This function takes an array of integers and its size and reverses
 * the order of the elements in the array.
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
        int i, tmp;

        for (i = 0; i < n / 2; i++)
        {
                tmp = a[i];
                a[i] = a[n - i - 1];
                a[n - i - 1] = tmp;
        }
}

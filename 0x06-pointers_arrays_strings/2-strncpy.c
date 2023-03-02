/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to copy from src
 *
 * Description: This function copies at most n bytes from the src string to the
 * dest string. If there is no null byte among the first n bytes of src, the
 * result will not be null-terminated. If the length of src is less than n,
 * the remainder of dest will be padded with null bytes until a total of n
 * bytes have been written. Returns a pointer to the resulting string dest.
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
        int i;

        /* copy up to n bytes from src to dest */
        for (i = 0; i < n && src[i] != '\0'; i++)
        {
                dest[i] = src[i];
        }

        /* pad dest with null bytes if necessary */
        for (; i < n; i++)
        {
                dest[i] = '\0';
        }

        /* return pointer to dest */
        return (dest);
}

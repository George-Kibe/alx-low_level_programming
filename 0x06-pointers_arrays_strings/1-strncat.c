/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to use from src
 *
 * Description: This function appends at most n bytes from the src string to the
 * dest string, overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte. Returns a pointer to the resulting
 * string dest.
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
        int dest_len = 0, i = 0;

        /* get length of dest */
        while (dest[dest_len] != '\0')
        {
                dest_len++;
        }

        /* concatenate src to dest */
        while (src[i] != '\0' && i < n)
        {
                dest[dest_len] = src[i];
                dest_len++;
                i++;
        }

        /* add terminating null byte */
        dest[dest_len] = '\0';

        /* return pointer to dest */
        return (dest);
}

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest, and then adds
 * a terminating null byte. Returns a pointer to the resulting string dest.
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
        int dest_len = 0, i = 0;

        /* get length of dest */
        while (dest[dest_len] != '\0')
        {
                dest_len++;
        }

        /* concatenate src to dest */
        while (src[i] != '\0')
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

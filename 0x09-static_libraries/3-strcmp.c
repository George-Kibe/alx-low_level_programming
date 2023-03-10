/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Description: This function compares the two strings s1 and s2. It returns an
 * integer less than, equal to, or greater than zero if s1 is found, respectively,
 * to be less than, to match, or be greater than s2. The comparison is done using
 * unsigned characters, so that `\200' is greater than `\0'.
 *
 * Return: integer less than, equal to, or greater than zero if s1 is found to
 * be less than, to match, or be greater than s2
 */
int _strcmp(char *s1, char *s2)
{
        while (*s1 && *s2 && (*s1 == *s2))
        {
                s1++;
                s2++;
        }

        return (*s1 - *s2);
}

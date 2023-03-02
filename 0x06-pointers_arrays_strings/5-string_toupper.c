/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: the string to be modified
 *
 * Description: This function takes a string and changes all lowercase letters to
 * uppercase. It modifies the string in place and returns a pointer to the modified
 * string.
 *
 * Return: a pointer to the modified string
 */
char *string_toupper(char *str)
{
        char *s = str;

        while (*s)
        {
                if (*s >= 'a' && *s <= 'z')
                        *s = *s - 'a' + 'A';

                s++;
        }

        return str;
}

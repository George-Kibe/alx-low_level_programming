#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to be searched
 * @c: the character to be located in the string
 *
 * Return: pointer to the first occurrence of @c in the string @s,
 *         or NULL if @c is not found in @s
 */
char *_strchr(char *s, char c)
{
    while (*s != '\0') {
        if (*s == c)
            return s;
        s++;
    }
    
    if (*s == c)
        return s;
    else
        return NULL;
}

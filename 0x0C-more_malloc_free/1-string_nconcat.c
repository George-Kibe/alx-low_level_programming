#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 * @n: The maximum number of bytes of s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *concat_str;
    unsigned int s1_len, s2_len, i;

    /* Treat NULL as an empty string */
    s1 = s1 ? s1 : "";
    s2 = s2 ? s2 : "";

    s1_len = strlen(s1);
    s2_len = strlen(s2);

    /* Use entire s2 string if n >= s2_len */
    if (n >= s2_len)
        n = s2_len;

    /* Allocate memory for the concatenated string */
    concat_str = malloc((s1_len + n + 1) * sizeof(char));
    if (concat_str == NULL)
        return (NULL);

    /* Copy s1 to the concatenated string */
    for (i = 0; i < s1_len; i++)
        concat_str[i] = s1[i];

    /* Copy first n bytes of s2 to the concatenated string */
    for (i = 0; i < n; i++)
        concat_str[s1_len + i] = s2[i];

    /* Null-terminate the concatenated string */
    concat_str[s1_len + n] = '\0';

    return (concat_str);
}

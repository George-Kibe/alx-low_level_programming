#include <stdlib.h>
#include <string.h>

/**
 * count_words - counts the number of words in a string
 * @str: the string to count words in
 *
 * Return: the number of words in str
 */
static int count_words(char *str)
{
    int i, count = 0;

    for (i = 0; str[i]; i++)
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
        {
            count++;
        }
    }

    return (count);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k, len, word_count = 0;

    if (str == NULL || *str == '\0')
    {
        return (NULL);
    }

    word_count = count_words(str);

    if (word_count == 0)
    {
        return (NULL);
    }

    words = malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
    {
        return (NULL);
    }

    for (i = 0, j = 0; i < word_count; i++)
    {
        while (str[j] == ' ')
        {
            j++;
        }

        len = 0;
        while (str[j + len] != ' ' && str[j + len] != '\0')
        {
            len++;
        }

        words[i] = malloc((len + 1) * sizeof(char));
        if (words[i] == NULL)
        {
            for (k = 0; k < i; k++)
            {
                free(words[k]);
            }
            free(words);
            return (NULL);
        }

        strncpy(words[i], &str[j], len);
        words[i][len] = '\0';

        j += len;
    }

    words[i] = NULL;

    return (words);
}

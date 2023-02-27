#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to reverse
 */
void rev_string(char *s)
{
        int i = 0;
        int j = 0;
        char temp;

        /* Find the length of the string */
        while (s[j] != '\0')
                j++;

        j--;

        /* Reverse the string */
        while (i < j)
        {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++;
                j--;
        }
}

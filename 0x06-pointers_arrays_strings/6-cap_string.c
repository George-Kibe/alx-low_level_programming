/**
 * cap_string - capitalizes all words of a string
 * @str: the string to be modified
 *
 * Description: This function takes a string and capitalizes the first letter of each
 * word in the string. Words are separated by spaces, tabs, new lines, commas, semicolons,
 * periods, exclamation marks, question marks, double quotes, parentheses, and braces.
 * It modifies the string in place and returns a pointer to the modified string.
 *
 * Return: a pointer to the modified string
 */
char *cap_string(char *str)
{
        char *s = str;
        int capitalize_next = 1;

        while (*s)
        {
                if (capitalize_next && (*s >= 'a' && *s <= 'z'))
                        *s = *s - 'a' + 'A';

                capitalize_next = 0;

                switch (*s)
                {
                        case ' ':
                        case '\t':
                        case '\n':
                        case ',':
                        case ';':
                        case '.':
                        case '!':
                        case '?':
                        case '\"':
                        case '(':
                        case ')':
                        case '{':
                        case '}':
                                capitalize_next = 1;
                                break;

                        default:
                                break;
                }

                s++;
        }

        return str;
}

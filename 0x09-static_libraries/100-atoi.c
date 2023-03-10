#include <limits.h>

/**
 * _atoi - converts a string to an integer.
 * @s: the string to convert
 *
 * Return: the integer value of the string, or 0 if no numbers are found.
 */
int _atoi(char *s)
{
  int sign = 1;
  int num = 0;

  while (*s != '\0')
  {
    if (*s == '-')
      sign = -sign;

    if (*s >= '0' && *s <= '9')
    {
      num = num * 10 + (*s - '0');

      if (num < 0) /* Check for integer overflow */
        return (sign == -1) ? INT_MIN : INT_MAX;
    }

    if (num != 0 && (*s < '0' || *s > '9'))
      break;

    s++;
  }

  return num * sign;
}
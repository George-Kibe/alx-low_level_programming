#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: the string to print
 */
void puts_half(char *str)
{
  int length = strlen(str);
  int start;
  int i;

  if (length % 2 == 0)
    start = length / 2;
  else
    start = (length - 1) / 2;

  for (i = start; i < length; i++)
    putchar(str[i]);

  putchar('\n');
}

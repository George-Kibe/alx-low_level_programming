#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 11

int main(void)
{
  char password[PASSWORD_LENGTH];
  int i, ascii;

  srand(time(NULL)); /* Seed the random number generator */

  for (i = 0; i < PASSWORD_LENGTH - 1; i++)
  {
    do
    {
      ascii = rand() % 94 + 33; /* Generate a random printable ASCII character */
    } while (ascii == 127 || ascii == '\\' || ascii == '"'); /* Avoid special characters */

    password[i] = (char)ascii; /* Convert the ASCII value to a character */
  }

  password[i] = '\0'; /* Add the null terminator */

  printf("%s\n", password); /* Print the password */

  return 0;
}

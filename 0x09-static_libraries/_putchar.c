#include <unistd.h>

/**
 * _putchar - writes a character to the standard output stream
 * @c: the character to print
 *
 * Return: On success, the character written as an unsigned char cast to an int
 *         (usually 1). On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
    return write(STDOUT_FILENO, &c, 1);
}

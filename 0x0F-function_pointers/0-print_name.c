#include <stddef.h>

/**
 * print_name - prints a name using a given printing function
 *
 * @name: the name to be printed
 * @f: a pointer to the printing function to be used
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL) /* validate inputs */
        f(name); /* call the printing function with the name argument */
}

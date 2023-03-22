#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 if successful, otherwise 1 or 2
 */
int main(int argc, char *argv[])
{
    int bytes, i;
    unsigned char *main_opcode = (unsigned char *)main;

    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    bytes = atoi(argv[1]);

    if (bytes < 0)
    {
        printf("Error\n");
        return 2;
    }

    for (i = 0; i < bytes; i++)
    {
        printf("%02x", main_opcode[i]);
        if (i != bytes - 1)
            printf(" ");
    }
    printf("\n");

    return 0;
}


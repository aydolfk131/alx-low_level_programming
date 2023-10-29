#include <stdio.h>
#include "main.h"		
/**
 * main - A function that prints all arguments it receives
 * @argc: number of arguments
 * @argv: argument count
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    int i, j;

    for (i = 0; i < argc; i++)
    {
        for (j = 0; argv[i][j] != '\0'; j++)
        {
            putchar(argv[i][j]);
        }
        putchar('\n');
    }

    return 0;
}

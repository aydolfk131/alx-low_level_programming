#include <stdio.h>

int _putchar(char c);
/**
 * main - Prints the name of file it was compiled from
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char *filename = __FILE__;
	int i;

	for (i = 0; filename[i] != '\0'; i++)
		_putchar(filename[i]);

	_putchar('\n');

	return (0);
}

int _putchar(char c)
{
	return putchar(c);
}

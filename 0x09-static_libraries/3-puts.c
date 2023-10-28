#include "main.h"

/**
 * _puts - prints a string in stdout
 * @s: the string
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);
	_putchar('\n');
}

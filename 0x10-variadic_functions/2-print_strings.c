#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - A func that Prints string
* @separator: The string printed between strings.
* @n: Tnumber of strings passed
* @...: A variable number of strings
* Description: If separator is NULL, it is not printed
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(strings);
}

#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - A func Returns the sum of all its paramters
* @n: The number of paramters passed to the function
* @...: A variable number of paramter
* Return: sum
* Otherwise - the sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}

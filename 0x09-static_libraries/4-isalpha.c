#include "main.h"

/**
 * _isalpha -A fun checks for alphabetic character
 * @c: the character
 * Return: 1 if c is alpha, 0 otherwise
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

#include "main.h"
/**
 * _strlen -A fuction that  returns the length of a string
 * @s:  The string
 * Return:  stringlength
 */
int _strlen(char *s)
{
int lon = 0;

while (*s != '\0')
{
lon++;
s++;
}
return (lon);
}

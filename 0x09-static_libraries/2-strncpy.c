#include "main.h"
/**
 * _strncpy - A program that copy a string
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
int j;

j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}


#include "main.h"
#include <string.h>
/**
 * _strncat - function that concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: a string
 */
char *_strncat(char *dest, char *src, int n)
{
	strcat(dest, src, n);
	return (dest);
}

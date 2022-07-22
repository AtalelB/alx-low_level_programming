#include "main.h"
#include <string.h>
/**
 * _strcat - This is a strcat function
 * @dest: the first parameter
 * @src: second parameter
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a])
		a++;
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a += 1;
	}
	dest[a] = '\0';
	return (dest);
}



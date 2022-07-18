#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: Memory area to fill
 * @b: constant byte to fill
 * @n: bytes of emory area to fill
 * Return: The memory area filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

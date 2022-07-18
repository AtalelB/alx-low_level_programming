#incude "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: Memory area to fill
 * @b: constant byte to fill
 * @n: bytes of emory area to fill
 * Return: The memory area filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}

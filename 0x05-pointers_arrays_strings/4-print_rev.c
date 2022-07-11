#include "main.h"
#include <string.h>
/**
 * print_rev - printing a string in reverse
 * @s: the string to be printed in reverse
 * Return: Always 0
 */
void print_rev(char *s)
{
	int i, n;

	s = "atalel";
	n = strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
	_putchar(s[i]);
	}
}

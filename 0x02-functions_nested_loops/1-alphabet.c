#include "main.h"
/**
 * main-a function that prints the alphabet, in lowercase, followed by nw line.
 *
 * Return: Always 0.
 */
print_alphabet(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}

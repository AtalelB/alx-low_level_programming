#include "main.h"

/**
 * print_most_numbers - print the numbers since 0up to 9
 * Descriptons: prints the numbers excluding 2 and 4
 *
 * Return:  the number since 0 up to 9
 */

void print_most_numbers(void)
{
	int x = 0;

	for (x = 0; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}
	_putchar('\n');
}




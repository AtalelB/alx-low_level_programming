#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 *  @c: is the int that will use for the argument of the function
 *
 *  Return: 1 for uppercase, 0 for lwercase.
 */

int_isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
	break;
		}
	}
	return (isupper);
}

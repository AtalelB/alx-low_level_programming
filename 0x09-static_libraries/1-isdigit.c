#include "main.h"

/**
 * _isdigit - check if a character is a digit
 * @x: The number to be checked
 *
 * Return: 1 for a character that will be digit or for any else
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}

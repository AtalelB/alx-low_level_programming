#include "main.h"
#include <ctype.h>

/**
 * _isupper - function that checks for uppercase character
 *  @c: return char type
 *  Return: 1 for fail and 0 for success
 */
int_isupper(int c)
{
	int i = isupper(c);
	if(i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

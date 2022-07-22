#include "main.h"
/**
 * _strlen - length of a string
 *  @s: a string  pointer to an int that will be updated
 *
 *  Return: length of the string
 */
int _strlen(char *s)
{
	int l;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}

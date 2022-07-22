#include "main.h"
/**
 * _puts -  function that prints a string
 * @str: a parameter to _puts function
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

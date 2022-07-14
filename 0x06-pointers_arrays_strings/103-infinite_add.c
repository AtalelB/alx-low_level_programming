#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--; n2--; size_r--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + size_r) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n1; n1--; size_r++)
	{
		num = (*n1 - '0') + tens;
		*(r + size_r) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n2; n2--; size_r--)
	{
		num = (*n2 - '0') + tens;
		*(r + size_r) = (num % 10) + '0';
		tens = num / 10;
	}
}


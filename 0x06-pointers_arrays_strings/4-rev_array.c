#include "main.h"
#include <string.h>
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: First parameter
 * @n: Second parameter
 * Return: a string
 */
void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	p = a;
	for (i = 0; i < n; i++)
	p++;
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}

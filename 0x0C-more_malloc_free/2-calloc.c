#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _calloc -> calloc library internally implemented
 * @nmemb: parameter 1
 * @size: parameter 2
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(size * nmemb);
	if (mem == NULL)
		return (NULL);
	filler = mem;
	for (index = 0; index < (size * nmemb); index++)
	{
		filler[index] = '\0';
	}
	return (mem);
}

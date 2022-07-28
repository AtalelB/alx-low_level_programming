#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = (int *)malloc(sizeof(int *) * size);
	if (array == NULL)
		return (NULL);
	for (index = 0; index <= size; index++)
		array[index] = min++;
	return (array);
}

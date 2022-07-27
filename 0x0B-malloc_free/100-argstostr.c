#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concantenates all the arguments of the program
 * @ac: argument count
 * @av: pointer to arraya of size ac
 * Return:  if ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *arg;

	size = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		arg = malloc((sizeof(char) * size) + 1);
		if (arg == NULL)
			return (NULL);
		i = 0;
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
			{
				arg[k] = av[i][j];
				j++;
				k++;
			}
			arg[k] = '\n';
			k++;
			i++;
		}
		arg[k] = '\0';
		return (arg);
	}

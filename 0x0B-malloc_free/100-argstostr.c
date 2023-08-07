#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of elements.
 * @av: the elements.
 *
 * Return: Nothing.
 */
char *argstostr(int ac, char **av)
{
	int i, o, p, t;
	int *count;
	char *ptr;

	count = malloc(sizeof(int) * ac);
	if (ac == 0 || av == NULL)
	{
		free(count);
		return (NULL);
	}
	p = 0, i = 0;
	while (p < ac)
	{
		o = 0;
		while (av[p][o] != '\0')
		{
			i++;
			o++;
		}
		count[p] = o + 1;
		p++;
	}
	ptr = malloc((sizeof(char) * i) + ac);
	if (ptr == NULL)
	{
		free(ptr);
		free(count);
		return (NULL);
	}
	p = 0, o = 0;
	while (p < ac)
	{
		t = 0;
		while (count[p] != 0)
		{
			if (count[p] == 1)
			{
				ptr[o] = '\n';
				o++;
				break;
			}
			ptr[o] = av[p][t];
			t++;
			o++;
			count[p]--;
		}
		p++;
	}
	free(count);
	return (ptr);
}

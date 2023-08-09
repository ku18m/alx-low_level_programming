#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * **assign - assigns the values to the pointer ptr.
 * @o: the number of words.
 * @start: array of starting indexs.
 * @end: array of ending indexs.
 * @str: string to split.
 * @ptr: the pointer to assign the values in.
 *
 * Return: pointer to an array of strings.
 */
char **assign(int o, int *start, int *end, char **ptr, char *str)
{
	int i, p, size;

	i = 0;
	while (i < o)
	{
		size = (end[i] - start[i] + 2);
		ptr[i] = malloc(sizeof(char) * size);
		if (ptr[i] == NULL)
		{
			while (i <= 0)
			{
				free(ptr[i]);
				i--;
			}
			free(ptr);
			return (NULL);
		}
		p = 0;
		while (p < size - 1)
		{
			if (p == size - 2)
			{
				ptr[i][p] = '\0';
			}
			ptr[i][p] = str[start[i]];
			p++;
			start[i]++;
		}
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/**
 * **strtow - splits a string into words.
 * @str: string to split.
 *
 * Return: pointer to an array of strings or NULL.
 */
char **strtow(char *str)
{
	int i, o, p, start[4096], end[4096];
	char **ptr;

	i = 0, o = 0, p = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i - 1] == ' ' || i == 0))
		{
			start[p] = i;
			p++;
		}
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			end[o] = i;
			o++;
		}
		i++;
	}
	ptr = malloc(sizeof(char *) * (o + 1));
	if (ptr == NULL || o == 0)
	{
		free(ptr);
		return (NULL);
	}
	ptr = assign(o, start, end, ptr, str);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}

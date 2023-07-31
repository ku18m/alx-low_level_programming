#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: the pointer to search in.
 * @accept: the characters to look for.
 * Return: the length of the prefix substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	int o, i;

	i = 0;
	while (accept[i] != '\0')
	{
		o = 0;
		while (s[o] != '\0')
		{
			if (s[o] == accept[i])
			{
				return (o + 1);
			}
			o++;
		}
		i++;
	}
	return (0);
}

#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring.
 *
 * @haystack: the string to search in.
 * @needle: the string to look for.
 * Return: the location of substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int loop1, loop2, o;

	loop1 = 0;
	while (haystack[loop1] != '\0')
	{
		loop2 = 0;
		while (needle[loop2] != '\0')
		{
			if (haystack[loop1] == needle[loop2])
			{
				o = loop1;
				while (haystack[o] == needle[loop2])
				{
					if (needle[loop2 + 1] == '\0')
					{
						return (haystack + loop1);
					}
					loop2++;
					o++;
				}
			}
			else
			{
				break;
			}
		}
		loop1++;
	}
	return (NULL);
}

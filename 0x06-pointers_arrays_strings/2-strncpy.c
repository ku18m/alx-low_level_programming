#include "main.h"
/**
 * _strncpy -  copies the string pointed to by n of src. 
 * @dest: a pointer to the string.
 * @src: an array of chars.
 * @n: number of chars to copy.
 *
 * Return: (dest) coppied array.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (n > 0)
	{
		dest[a] = src[a];
		a++;
        n--;
	}
	return (dest);
}

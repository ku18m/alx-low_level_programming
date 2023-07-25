#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string.
 * @str: a pointer to the string.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int i = 0;
	char *count = str;

	while (*count != '\0')
	{
		count++;
		i++;
	}
	while (i >= 0)
	{
		_putchar(*str);
		str = str + 2;
		i--;
	}
	_putchar('\n');
}

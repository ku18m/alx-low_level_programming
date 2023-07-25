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
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}

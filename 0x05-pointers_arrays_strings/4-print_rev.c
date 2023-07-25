#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: a pointer to the string.
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (i >= 0)
	{
		_putchar(*s);
		i--;
		s--;
	}
}

#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: a pointer to the string.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int i = 0;
	char *half = str;

	while (*half != '\0')
	{
		half++;
		i++;
	}
	if (i % 2 != 0)
	{
		i--;
	}
	str = str + (i / 2);
	while (i >= 0)
	{
		_putchar(*str);
		i--;
		str++;
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: length of the line.
 *
 * Return: void.
 */
void print_line(int n)
{
	int a = 1;

	n++;
	while (a < n)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_triangle - draws a diagonal line in the terminal.
 * @size: length of the lines.
 *
 * Return: void.
 */
void print_triangle(int size)
{
	int a, b, c;

	size++;
	a = 1;
	if (size > a)
	{
		while (a < size)
		{
			c = (size - 1);
			while (c > a)
			{
				_putchar(' ');
				c--;
			}
			b = 1;
			while (b <= a)
			{
				_putchar('#');
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
	else
	{
		_putchar('\n');
	}
}

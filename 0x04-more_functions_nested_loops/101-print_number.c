#include"main.h"
/**
 * print_number - prints an integer.
 * @n: integer to print.
 *
 * Return: void.
 */
void print_number(int n)
{
	int i = n;

	if (i < 0)
	{
		_putchar('-');
		i = i * -1;
	}
	if ((i / 10) > 0)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + 48);
}

#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9 except 2 & 4.
 *
 * Return: void.
 */
void print_most_numbers(void)
{
	int a = 47;

	while (a < 58)
	{
		a++;
		if (a == 50 || a == 52)
		{
            continue;
		}
		_putchar(a);
	}
	_putchar('\n');
}

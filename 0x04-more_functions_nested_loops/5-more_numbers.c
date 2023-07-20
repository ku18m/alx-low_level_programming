#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 *  followed by a new line.
 *
 * Return: void.
 */
void more_numbers(void)
{
	int c = 0, a = 47, b = 48, loop;

	while (c < 10)
	{
		loop = 0, a = 47, b = 48;
		while (loop < 15)
		{
			if (loop <= 9)
			{
				a++;
			}
			else
			{
				a = 49;
			}
			_putchar(a);
			if (loop > 9)
			{
				_putchar(b);
				b++;
			}
			loop++;
		}
	_putchar('\n');
	c++;
	}
}

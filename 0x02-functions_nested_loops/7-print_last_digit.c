#include "main.h"
/**
 * print_last_digit - print and return the last digit of given number.
 *
 * @n: the number to check.
 *
 * Return: the last digit.
 */
int print_last_digit(int n)
{
	if (n < 1)
	{
		n = n * -1;
	}
	n = n % 10;
	_putchar(48 + n);
	return (n);
}

#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: the given number.
 * Return: the natural square root of a number.
 */

int i = 1;
int o = 1;

int _sqrt_recursion(int n)
{
	if (o == 0)
	{
		i = 1;
	}
	if (n / i != i && i * i > n)
	{
		o = 0;
		return (-1);
	}
	else if (n / i != i && i * i < n)
	{
		i++;
		o = 1;
		return (n / _sqrt_recursion(n));
	}
	else if (i * i == n)
	{
		o = 0;
		return (i);
	}
	else
	{
		return (-n);
	}
}

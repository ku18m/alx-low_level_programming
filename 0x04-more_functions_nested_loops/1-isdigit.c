#include "main.h"
/**
 * _isdigit - check if the character is digit or not.
 * @c: The character to check.
 *
 * Return: 0 (If not a digit), 1 (If digit).
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	return (0);
}

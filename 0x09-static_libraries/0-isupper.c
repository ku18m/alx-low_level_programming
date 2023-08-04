#include "main.h"
/**
 * _isupper - check if character lower or upper.
 * @c: The character to check.
 *
 * Return: 0 (If lower), 1 (If upper).
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	return (0);
}

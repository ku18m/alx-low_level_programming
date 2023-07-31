#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring.
 *
 * @haystack: the string to search in.
 * @needle: the string to look for.
 * Return: the location of substring.
 */
void print_chessboard(char (*a)[8])
{
	int row, column;

    for (row = 0; row < 8; row++)
    {
        for (column = 0; column < 8; column++)
        {
            _putchar(a[row][column]);
        }
        _putchar('\n');
    }
}

#include "main.h"
#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	long int i, root, loop;

	i = 612852475143, root = 2;
	for (loop = 0; loop < i; loop++)
	{
		while (i % root != 0)
		{
			root++;
		}
		i = i / root;
		if (i == 1)
		{
			printf("%lu\n", root);
		}
	}
	return (0);
}

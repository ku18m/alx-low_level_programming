#include <stdio.h>
/**
 * main - entry point.
 *
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	long int first = 1, second = 2, third, i;

	printf("%lu, %lu, ", first, second);
	for (i = 0; i < 17; i++)
	{
		third = first + second;
		first = second + third;
		second = first + third;
		printf("%lu, %lu, %lu", third, first, second);
		if (i != 16)
		{
			printf(", ");
		}
	}
	printf("\n");
return (0);
}

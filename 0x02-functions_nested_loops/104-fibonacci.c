#include <stdio.h>
/**
 * main - entry point.
 *
 * Description: find first 98 Fibonacci nums.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	long int first = 1, second = 2, third, i;

	printf("%lu, %lu, ", first, second);
	for (i = 0; i < 33; i++)
	{
		third = first + second;
		first = second + third;
		second = first + third;
		printf("%lu, %lu, %lu", third, first, second);
		if (i != 32)
		{
			printf(", ");
		}
	}
	printf("\n");
return (0);
}

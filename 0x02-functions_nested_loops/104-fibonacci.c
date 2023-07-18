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
	long double first = 1, second = 2, third, i;

	printf("%.Lf, %.Lf, ", first, second);
	for (i = 0; i < 32; i++)
	{
		third = first + second;
		first = second + third;
		second = first + third;
		printf("%.Lf, %.Lf, %.Lf", third, first, second);
		if (i != 31)
		{
			printf(", ");
		}
	}
	printf("\n");
return (0);
}

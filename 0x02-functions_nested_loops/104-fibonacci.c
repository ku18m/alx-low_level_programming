#include <stdio.h>
/**
 * main - entry point.
 *
 * Description: find first 98 Fibonacci nums,
 * with just long data type, long long not allowed.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	unsigned long frst = 1, sec = 2, thrd, i, B = 100000000000,
	frst1, frst2, sec1, sec2, r31, r32, r21, r22, r11, r12;

	printf("%lu, %lu, ", frst, sec);
	for (i = 0; i < 32; i++)
	{
		if (i <= 29)
		{
		thrd = frst + sec, frst = sec + thrd, sec = frst + thrd;
		printf("%lu, %lu, %lu", thrd, frst, sec);
		}
		else if (i == 30)
		{
			frst1 = frst / B, frst2 = frst % B;
			sec1 = sec / B, sec2 = sec % B;
			r31 = frst1 + sec1, r32 = frst2 + sec2;
			r11 = sec1 + r31, r12 = sec2 + r32;
			r21 = r11 + r31, r22 = r12 + r32;
			printf("%lu%lu, %lu%lu, %lu%lu", r31, r32, r11, r12, r21, r22);
		}
		else
		{
			r31 = r11 + r21, r32 = r12 + r22;
			r11 = r21 + r31, r12 = r22 + r32;
			r21 = r11 + r31, r22 = r12 + r32;
			printf("%lu%lu, %lu%lu, %lu%lu", r31, r32, r11, r12, r21, r22);
		}
		if (i != 31)
		{
			printf(", ");
		}
	}
	printf("\n");
return (0);
}

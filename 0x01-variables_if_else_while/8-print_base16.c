#include<stdio.h>
#include<stdlib.h>
/**
 * main - print nums from 0 to 9 using putchar with ASCII code.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 48;

do {
putchar(a);
a++;
} while (a < 58);
a = 96;
do {
a++;
putchar(a);
} while (a < 103);
putchar('\n');
return (0);
}

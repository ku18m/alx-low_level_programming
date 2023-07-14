#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints alphabet except 'e' 'q' using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 0;

do {
printf("%d", a);
a++;
} while (a < 10);
putchar('\n');
return (0);
}

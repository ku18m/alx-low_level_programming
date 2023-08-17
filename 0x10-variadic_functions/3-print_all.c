#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_integer - prints a char from variable list.
 *
 * @c: the variable list that holds the variables.
 *
 * Return: Nothing.
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_integer - prints an integer from variable list.
 *
 * @c: the variable list that holds the variables.
 *
 * Return: Nothing.
 */
void print_integer(va_list c)
{
	printf("%d", va_arg(c, int));
}

/**
 * print_float - prints a float number from variable list.
 *
 * @c: the variable list that holds the variables.
 *
 * Return: Nothing.
 */
void print_float(va_list c)
{
	printf("%f", va_arg(c, double));
}

/**
 * print_string - prints a string from variable list.
 *
 * @c: the variable list that holds the variables.
 *
 * Return: Nothing.
 */
void print_string(va_list c)
{
	char *store = va_arg(c, char *);

	if (store == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", store);
	}
}

/**
 * print_all - prints anything.
 *
 * @format: a string that holds the flags for the variables.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	unsigned int i, o;
	va_list ptr;
	print_handler funcs[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(ptr, format);
	i = 0;
	while (format[i] != '\0')
	{
		o = 0;
		while (funcs[o].flag != '\0')
		{
			if (funcs[o].flag == format[i])
			{
				funcs[o].func(ptr);
				if (format[i + 1] != '\0')
				{
					printf(", ");
				}
			}
			o++;
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}

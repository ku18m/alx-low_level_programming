#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of integers.
 *
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: the first index where value is located,
 * OR (-1) if value is not present.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, start, step;

	if (array == NULL)
		return (-1);

	step = sqrt(size);
	i = 0;
	while (i < size)
	{
		if (array[i] >= value)
		{
			start = i - step;
			printf("Value found between indexes [%lu] and [%lu]\n", start, i);
			for (i = start; i < size && i <= start + step; i++)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += step;
	}

	return (-1);
}

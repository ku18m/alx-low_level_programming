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
	size_t end, start, step;

	if (array == NULL)
		return (-1);

	step = sqrt(size);
	start = 0;
	end = start + step;
	while (start < size)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if (array[end] >= value || end >= size)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", start, end);
			break;
		}
		start += step, end += step;
	}

	while (start <= end && start < size)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
		start++;
	}

	return (-1);
}

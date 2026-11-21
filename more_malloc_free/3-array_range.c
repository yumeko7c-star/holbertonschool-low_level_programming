#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: first value in the array
 * @max: last value in the array
 *
 * Return: pointer to the array, or NULL if it cannot be created
 */
int *array_range(int min, int max)
{
	int *array;
	unsigned int difference;
	size_t count, i;
	int value;

	if (min > max)
		return (NULL);

	difference = (unsigned int)max - (unsigned int)min;
	count = (size_t)difference + 1;
	if (count == 0 || count > (size_t)-1 / sizeof(*array))
		return (NULL);

	array = malloc(count * sizeof(*array));
	if (array == NULL)
		return (NULL);

	value = min;
	for (i = 0; i < count; i++)
	{
		array[i] = value;
		if (value < max)
			value++;
	}

	return (array);
}

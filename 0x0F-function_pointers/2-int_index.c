#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array of integers.
 * @array: The array of integers.
 * @size: The size of the array.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: The index of the first element for which
 *                the cmp function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int h;

	if (size <= 0)
		return (-1);

	if (!array || !size || !cmp)
		return (-1);

	for (h = 0; h < size; h++)
	{
		if (cmp(array[h]))
			return (h);
	}

	return (-1);
}

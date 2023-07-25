#include "sort.h"

/**
 * bubble_sort - bubble style sorting
 * @array: The array arg
 * @size: Number of elements of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t number = 0, s = size;
	int container;

	if (array == NULL)
		return;
	for (s = size; s > 0; s--)
	{
		for (number = 0; number < size - 1; number++)
		{
			if (array[number] > array[number + 1])
			{
				container = array[number];
				array[number] = array[number + 1];
				array[number + 1] = container;
				print_array(array, size);
			}
		}
	}
}

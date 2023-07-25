#include "sort.h"
/**
 * selection_sort - sorting with selection_sort style
 * @array: The array arg
 * @size: Number of elements of @array
 */
void selection_sort(int *array, size_t size)
{
	size_t lesser, temp, a, b, swap;

	if (array == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		for (lesser = a, b = a; b < size; b++)
			if (array[b] < array[lesser])
			{
				lesser = b;
				swap = 1;
			}
		if (swap == 1)
		{
			temp = array[lesser];
			array[lesser] = array[a];
			array[a] = temp;
			print_array(array, size);
			swap = 0;
		}
	}
}

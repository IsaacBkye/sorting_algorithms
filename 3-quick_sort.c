#include "sort.h"
/**
 * part -  partition of array
 * @array: array to sort
 * @size : size of array
 * @first: first position
 * @last: last position
 * Return: index of pivot
 */
int part(int *array, int first, int last, size_t size)
{
	int i = first - 1, temp, j;

	for (j = first; j <= last - 1; j++)
	{
		if (array[j] < array[last])
		{
			i++;
			if (i < j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] > array[last])
	{
		temp = array[i + 1];
		array[i + 1] = array[last];
		array[last] = temp;
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * pre_sort - recursive sorting of array
 * @array: array to sort
 * @size: size of array
 * @first: first position
 * @last: last position
 */
void pre_sort(int *array, int first, int last, size_t size)
{
	int pivot;

	if (first < last)
	{
		pivot = part(array, first, last, size);
		pre_sort(array, first, pivot - 1, size);
		pre_sort(array, pivot + 1, last, size);
	}
}

/**
 * quick_sort - sorting array by quick sort style
 * @array: array arg
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	pre_sort(array, 0, size - 1, size);
}

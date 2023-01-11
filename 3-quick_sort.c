#include "sort.h"

/**
 * quick_sort - sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: array
 * @size: size
*/

void quick_sort(int *array, size_t size)
{
	lomuto(array, size, array, size);
}

/**
 * lomuto - sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: array
 * @size: size
 * @array_print: Full array used to print
 * @size_print: Full array size used to print
*/

void lomuto(int *array, size_t size, int *array_print, size_t size_print)
{
	size_t i, j = 0;
	int n = 0;

	for (i = 0; i < size; i++)
	{
		if (array[size - 1] >= array[i])
		{
			if (i != j)
			{
				n = array[i];
				array[i] = array[j];
				array[j] = n;
				print_array(array_print, size_print);
			}
			j++;
		}
	}
	if (j > 2)
		lomuto(array, j - 1, array_print, size_print);
	if ((size - j + 1) > 2)
		lomuto(array + j, size - j, array_print, size_print);
}

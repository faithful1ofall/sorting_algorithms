#include "sort.h"


/**
 * bubble_sort - sorts an array of integers in ascending order using the
 * Bubble sort algorithm
 *
 * @array: data to sort
 * @size: size of data
 *
 * Return: No Return
 */
void bubble_sort(int *array, size_t size)
{
	size_t f, j, ftmp;

	if (size < 2)
		return;

	for (f = 0; f <= size - 1; f++)
	{
		for (j = 0; j <= size - 2; j++)
		{
			if (array[j] > array[j + 1])
			{
				ftmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = ftmp;
				print_array(array, size);
			}
		}
	}
}

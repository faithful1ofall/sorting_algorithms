#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int ftmp;

	ftmp = *a;
	*a = *b;
	*b = ftmp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t f, flen = size;
	bool fbubbly = false;

	if (array == NULL || size < 2)
		return;

	while (fbubbly == false)
	{
		fbubbly = true;
		for (f = 0; f < len - 1; f++)
		{
			if (array[f] > array[f + 1])
			{
				swap_ints(array + f, array + f + 1);
				print_array(array, size);
				fbubbly = false;
			}
		}
		flen--;
	}
}

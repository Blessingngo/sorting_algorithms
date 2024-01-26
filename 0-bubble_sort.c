#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - function that sorts an array in ascending order
 * @array: array of ints to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int l, m;
	int tmp;

	if (size < 2)
		return;

	for (l = 0; l < size; l++)
	{
		for (m = 0; m < size - l - 1; m++)
		{
			if (array[m] > array[m + 1])
			{
				tmp = array[m];
				array[m] = array[m + 1];
				array[m + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}


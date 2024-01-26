#include "sort.h"

/**
 * selection_sort - sorts an array following the selection sort algorithm
 * @array: array to sort
 * @size: size of the array;
 */
void selection_sort(int *array, size_t size)
{
	unsigned int l, m, min;

	register int tmp;

	if (size < 2)
		return;

	for (l = 0; l < size; l++)
	{
		min = l;
		for (m = l + 1; m < size; m++)
		{
			if (array[m] < array[min])
				min = m;
		}
		tmp = array[l];
		array[l] = array[min];
		array[min] = tmp;
		if (l != min)
			print_array(array, size);
	}
}


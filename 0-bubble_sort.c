#include "sort.h"

/**
 * bubble_sort - sorts array of int in an ascending order
 * using Bubble sort algorithm
 * array - the size of integer to be sorted
 * @size - the size of array
 */

void bubble_sort(int *array, size_t size)
{
	bool swap;
	int x;
	int tmp;
	int reti;

	if (array == NULL || size == 0)
		return;
	do {
		swap = false;
		x = 0;
		for (reti = size - 1; x < reti; x++)
		{
			if (array[x + 1] < array[x])
			{
				tmp = array[x];
				array[x] = array[x + 1];
				array[x + 1] = tmp;
				swapp = true;
				print_array(array, size);
			}
		}
		reti--;
	} while (swap);
}

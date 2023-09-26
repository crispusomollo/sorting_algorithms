#include "sort.h"

/**
 * selection_sort - sorts an array using the selection sort algorithm
 * @array: array to sort
 * @size: size of array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int y, z;
	int small;
	int tmp;
	int size1 = size;

	for (y = 0; y < size1 - 1; y++)
	{
		small = y;
		for (z = y + 1; z < size1; z++)
		{
			if (array[z] < array[small])
				small = z;
		}
		if (small != y)
		{
			tmp = array[y];
			array[y] = array[small];
			array[small] = tmp;
			print_array(array, size);
		}
	}
}

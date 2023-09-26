#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * by using the quick sort algorithm
 * @array: list of numbers
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	int small;
	int big;

	if (array == NULL || size == 0)
		return;

	small = 0;
	big = size - 1;

	new_sort(array, small, big, size);
}

/**
 * new_sort - sorts array using positions
 * @array: a list of numbers
 * @small: the first index of an array
 * @big: the last index of an array
 * @size: size of array
 */
void new_sort(int *array, int small, int big, size_t size)
{
	int part;

	if (small < big)
	{
		part = partition(array, small, big, size);
		new_sort(array, small, part - 1, size);
		new_sort(array, part + 1, big, size);
	}
}

/**
 * partition - slices an array using the Lomuto quick sort algorithm
 * @array: a list of integers
 * @small: the first index of the array
 * @big: the largest index of an array
 * @size: size of array
 * Return: position of pivot in array
 */
int partition(int *array, int small, int big, size_t size)
{
	int pvt;
	int y;
	int z;

	pvt = array[big];
	y = small - 1;

	for (z = small; z <= big; z++)
	{
		if (array[z] <= pvt)
		{
			y++;
			if (y != z)
			{
				swap(array, y, z);
				print_array(array, size);
			}
		}
	}
	return (y);
}

/**
 * swapping - swaps the values in an array
 * @array: the list of integers
 * @y: the first element to be swapped
 * @z: the second element to be swapped
 */
void swap(int *array, int y, int z)
{
	int tmp;

	tmp = array[y];
	array[y] = array[z];
	array[z] = tmp;
}

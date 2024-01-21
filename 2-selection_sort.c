#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @size: size of the array
 * @array: list with numbers
 */
void selection_sort(int *array, size_t size)
{
	size_t i, gage;
	int tmp, swap, logo = 0;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		tmp = i;
		logo = 0;
		for (gage = i + 1; gage < size; gage++)
		{
			if (array[tmp] > array[gage])
			{
				tmp = gage;
				logo += 1;
			}
		}
		swap = array[i];
		array[i] = array[tmp];
		array[tmp] = swap;
		if (logo != 0)
			print_array(array, size);
	}
}

#include "sort.h"
/**
 * bubble_sort - sort array lements from min to max value
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{

	size_t i, gage, tmp = 0;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
		for (gage = 0; gage < size; gage++)
		{
			if (array[gage] > array[gage + 1] && array[gage + 1])
			{
			tmp = array[gage];
			array[gage] = array[gage + 1];
			array[gage + 1] = tmp;
			print_array(array, size);
			}
		}
}

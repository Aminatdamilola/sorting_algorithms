#include "sort.h"
/**
 * max_val - gets max value from array
 * @array: pointer to array
 * @size: size of the array
 * Return: max value from array
 */
int max_val(int *array, size_t size)
{
	int max = array[0];
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return (max);
}
/**
 * radix_sort - sorts an array of integers is ASC order implementing
 * Radix Sort algorithm
 * @array: pointer to array
 * @size: size of the array
 **/
void radix_sort(int *array, size_t size)
{
	int *new_arr;
	int i, max, e = 1;
	int tam = size;

	if (!array || size < 2)
		return;


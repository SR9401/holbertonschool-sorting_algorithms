#include "sort.h"

/**
*
*
*
*
*
**/
void bubble_sort(int *array, size_t size)

{

long unsigned int tmp = 0;
long unsigned int i;
long unsigned int j = 0;


while (array[j] != array[size - 1])
{
i = 0;
	while (array[i] != array[size - 1])
	{
		if (array[i] > array[i + 1])
		{
			tmp = array[i];
			array[i] = array[i+1];
			array[i+1] = tmp;
			print_array(array, size);
		}
		i++;
	}
	j++;
}
}

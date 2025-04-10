#include "sort.h"

/**
*bubble_sort - fonction qui trie les elements d'un tableau
*
*@array: tableau a trier
*
*@size: taille du tableau
**/
void bubble_sort(int *array, size_t size)

{

int tmp = 0;
int i;
int j = 0;


while (array[j] != array[size - 1])
{
i = 0;
	while (array[i] != array[size - 1])
	{
		if (array[i] > array[i + 1])
		{
			tmp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = tmp;
			print_array(array, size);
		}
		i++;
	}
	j++;
}
}

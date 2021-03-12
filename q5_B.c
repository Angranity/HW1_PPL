#include <stdio.h>
#include "q5.h"


int* sortArray_B(int arr[], int size)
{
	int i = 0;
	while (i < size)
	{
		int j = i;
		while (arr[j] > arr[j + 1] && j < size - 1)
		{
			swap(&arr[j], &arr[j + 1]);
			j++;
		}
		i++;
	}
	return arr;
}

void q5_B()
{
	int arr[] = { 34, 12, 24, 65, 63 };
	int* sortedArray = sortArray_B(arr, SIZE);

	for (int i = 0; i < SIZE; i++)
		printf("%d ", sortedArray[i]);
}
#pragma once

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n;
	int* arr;
	printf("\n Enter the number of Elements : ");
	scanf_s("%d", &n);
	arr = (int*)calloc(n, sizeof(int));
	if (arr == NULL)
	{
		exit(1);
	}
	printf("\n Enter the %d values to be stored in the array \n", n);
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("\n You have entered : ");
	for (i = 0; i < n; i++)
	{
		printf(" %d ", arr[i]);
	}
	free(arr);
	return 0;
}

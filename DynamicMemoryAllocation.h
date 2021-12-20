#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int i, n;
	int* arr;

	printf("\n Enter the numbers of Elements ");
	scanf_s("%d", &n);
	arr = (int*)malloc(n * sizeof(int));
	if (arr == NULL)
	{
		printf("\n Memory Allocation Failed");
		exit(0);
	}
	for (i = 0; i < n; i++)
	{
		printf(" \n Enter the value %d of the array : ", i);
		scanf_s("%d", &arr[i]);
	}
	printf("\n The array contains \n");
	for (i = 0; i < n; i++)
	{
		printf(" %d ", arr[i]);
	}
}

#pragma once

#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int* ptr, arrSz  = 1;
	int temp, max = 0;


	printf("Provide ARRAY Size: \n");
	scanf_s("%d", &arrSz);

	ptr = (int*)malloc(arrSz * sizeof(int));

	for (int i = 0; i < arrSz; i++)
	{
		printf("Enter desired number: \n");
		scanf_s("%d", &temp);
		*(ptr + i) = temp;

		if (max < temp)
			max = temp;
	}

	printf("Maximum value found: %d: ", max);
}

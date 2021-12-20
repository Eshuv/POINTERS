#pragma once

#include <stdio.h>

int main()
{
	int num1 = 20, num2 = 10, sum = 0, mul = 0, div = 1;
	int* ptr1, * ptr2;
	ptr1 = &num1;
	ptr2 = &num2;

	if (ptr1 == ptr2)
	{
		printf("Values are same \n");
	}
	else
	{
		printf("Values are not same \n");
	}


	sum = *ptr1 + *ptr2;
	mul = *ptr1 * *ptr2;
	div = *ptr1 / *ptr2;

	printf("%d \n", sum);
	printf("%d \n", mul);
	printf("%d \n", div);

	(*ptr1)++;

	printf("%d", *ptr1);
}
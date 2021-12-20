#pragma once

#include <stdio.h>

int main()
{
	int* pnum;
	char* pch;
	float* pfnum;
	long* plnum;

	printf("Size of integer pointer : %d \n", sizeof(pnum));
	printf("Size of character pointer : %d \n", sizeof(pch));
	printf("Size of float pointer : %d \n", sizeof(pfnum));
	printf("Size of long pointer : %d \n", sizeof(plnum));
}

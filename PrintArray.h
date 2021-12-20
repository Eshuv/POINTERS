#pragma once

#include <stdio.h>

void Print(int *ptr, int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{		
		printf(" %d ", *ptr);
		ptr++;
	}
}

int main()
{
	int arr[] = { 10,20,30,40,50,60,70,80,90,100 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	

	Print(arr, sz);
}

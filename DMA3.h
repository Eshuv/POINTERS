#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NULL 0

int main()
{
	char* str;
	// Aloocating Memory
	str = (char*)malloc(10);
	if (str == NULL)
	{
		printf("\n Memory could not be allocated");
		exit(1);
	}
	strcpy(str, "Hi");
	printf("\n STR = %s", str);
	// Reallocation
	str = (char*)realloc(str, 20);
	if (str == NULL)
	{
		printf("\n Memory could not be reallocated");
		exit(1);
	}
	printf("\n STR size modified.");
	printf("\n STR = %s\n", str);
	strcpy(str, "Hi There");
	printf("\n STR = %s", str);
	// Freeing Memory
	free(str);
	return 0;
}


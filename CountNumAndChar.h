#pragma once

#include <stdio.h>

int main()
{
	int  upper = 0, lower = 0;
	char ch;
	char* pch;
	pch = &ch;

	while (ch != '*')
	{
		printf("Enter any Character : ");
		scanf_s("%c", pch);

		if (*pch >= 'a' && *pch <= 'z')
		{
			printf("The Entered Charcter in Upper Case is %c \n", *pch - 32);
			upper++;
		}
		if (*pch >= 'A' && *pch <= 'Z')
		{
			printf("The Entered Charcter in Lower Case is %c \n", *pch + 32);
			lower++;
		}
	}
	printf("The number of Entered Charcter in Upper Case is %d \n", upper);
	printf("The number of Entered Charcter in Lower Case is %d \n", lower);
}
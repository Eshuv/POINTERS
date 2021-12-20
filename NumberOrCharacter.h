#pragma once

#include <stdio.h>

int main()
{
	char ch;
	char* pch;
	pch = &ch;

	printf("Enter Any Character : ");
	scanf_s("%c", pch);

	if (*pch >= 'a' && *pch <= 'z')
	{
		printf("You Entered a Lower case Character ");
	}
	if (*pch >= 'A' && *pch <= 'Z')
	{
		printf("You Entered a Upper case Character ");
	}
	else
	{
		printf("You Entered a Number");
	}
}

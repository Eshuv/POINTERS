#pragma once

#include <stdio.h>

int main()
{
	char ch;
	char* pch;
	pch = &ch;

	printf("Enter The Element : ");
	scanf_s("%c", pch);

	if (*pch == 'a' || *pch == 'A' || *pch == 'e' || *pch == 'E' || *pch == 'i' || *pch == 'I' || *pch == 'o' || *pch == 'O' || *pch == 'u' || *pch == 'U')
	{
		printf("This is a Vowel");
	}
	else
	{
		printf("This is not a Vowel");
	}
}

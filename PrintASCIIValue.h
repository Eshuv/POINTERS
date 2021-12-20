#pragma once

#include <stdio.h>

int main()
{
	char ch;
	char * pch;
	pch = &ch;

	printf("Enter The Character : ");
	scanf_s("%c", &ch);

	printf("The entered character is : %c \n", *pch);
	printf("The ASCII value of entered character is : %d \n", *pch);
	printf("The ASCII value of entered character is : %c", *pch - 32);
}

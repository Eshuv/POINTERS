#pragma once

#include <stdio.h>

int main()
{
	int num1 = 1, num2 = 2, num3 = 3;
	int* pnum1, * pnum2, * pnum3;
	pnum1 = &num1;
	pnum2 = &num2;
	pnum3 = &num3;
	
	if (*pnum1 > *pnum2)
	{
		if (*pnum1 > *pnum3)
		{
			printf("%d", *pnum1);
		}
		else
		{
			printf("%d", *pnum3);
		}
	}
	else
	{
		if (*pnum2 > *pnum3)
		{
			printf("%d", *pnum2);
		}
		else
		{
			printf("%d", *pnum3);
		}
	}
}

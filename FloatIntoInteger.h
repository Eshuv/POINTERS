#pragma once

#include <stdio.h>

int main()
{
	int num1;
	int* pnum1;
	pnum1 = &num1;

	
	float num2 = 2.56;
	float* pnum2;
	pnum2 = &num2;

	
	

	*pnum1 = (int) *pnum2;

	printf("Value of pnum2 is %f in integer form is : %d", *pnum2, *pnum1);
	 
}

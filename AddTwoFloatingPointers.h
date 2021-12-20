#pragma once

#include <stdio.h>

int main()
{
	float num1 = 1.54, num2 = 2.56, sum;
	float* ptr1, * ptr2, *psum;
	ptr1 = &num1;
	ptr2 = &num2;
	psum = &sum;
	*psum = *ptr1 + *ptr2;
	

	printf("The sum of these floating point is : %.2f", *psum);
}

#pragma once

#include <stdio.h>

//int main()
//{
//	int num, * pnum;
//	pnum = &num;
//	printf("Enter The Number : ");
//	scanf_s("%d", &num);
//	printf("The number that was entered was : %d \n", *pnum);
//	printf("The address of the number in memory is : %p", &num);
//}

//int main()
//{
//	int num, * pnum1, * pnum2;
//	pnum1 = &num;
//	*pnum1 = 10;
//	pnum2 = pnum1;
//
//	printf("\n Value of using all three variables (num, *pnum1, *pnum2) = %d, %d, %d", num, *pnum1, *pnum2);
//	printf("\n Address of num using all three variables (num, pnum1, pnum2) = %x, %x, %x", num, pnum1, pnum2);
//
//}

int main()
{
	int a = 3;
	int b = 5;
	int* pnum;
	pnum = &a;

	printf("The value of a is : %d \n", *pnum);

	pnum = &b;
	printf("The value of b is : %d \n", *pnum);
}
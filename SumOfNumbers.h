#pragma once

#include <stdio.h>

int sum(int x)
{
	int s = 0;
	if (x == 1)
	{
		return x;
	}
	s = x + sum(x - 1);
	return s;
}

void main()
{
	int a;
	a = sum(5);
	printf("%d",a);
}

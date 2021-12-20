#pragma once

#include <stdio.h>
#define PIE 3.14

void AreaOfCircle(float *r, float *pArea)
{
	*pArea = PIE * (*r) * (*r);
}

int main()
{
	
	float rad, area;
	float *pRad, *pArea;

	pRad = &rad;
	pArea = &area;
	

	printf("Enter the radius of the circle:  ");
	scanf_s("%f", pRad);
	/**pArea = PIE * (*pRad) * (*pRad);
	printf("Radius: %f, Area: %f ", rad, area);*/

	//AreaOfCircle(pRad, pArea);
	AreaOfCircle(&rad, &area);
	printf("Radius: %f, Area: %f ", rad, area); 

}

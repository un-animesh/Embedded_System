/*
 * main.c
 *
 *  Created on: 12-Nov-2026
 *      Author: animesh
 */


#include<stdio.h>
#include<stdint.h>


/*Also enables via properties -> C/C++ Build -> Setting -> GCC C compiler -> Preprocessor -> add symbol*/
#define AREA_TRI
#define AREA_CIR

#undef AREA_CIR

int main()
{

#ifndef AREA_TRI
	float radius = 0;
	printf("This the circle area Calculation Program:\n");
	fflush(stdout);
	printf("Enter the radius:\n");
	fflush(stdout);
	scanf("%f",&radius);
	printf("Area of Circle = %f\n",(3.1415 * radius* radius));
	fflush(stdout);
#endif

#ifdef AREA_TRI

	float base, height;
	printf("This the Triangle area Calculation Program:\n");
	fflush(stdout);
	printf("Enter Base and Height:\n");
	fflush(stdout);
	scanf("%f%f",&base,&height);
	printf("Area of Circle = %f\n",(0.5 * base * height));
	fflush(stdout);

#endif

	return 0;

}

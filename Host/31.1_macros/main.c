/*
 * main.c
 *
 *  Created on: 12-Nov-2026
 *      Author: animesh
 */

#include<stdio.h>


#define PI_VALUE (3.1415f)

//#define AREA_OF_CIRCLE(x)	PI_VALUE * x * x				Never use like that
#define AREA_OF_CIRCLE(x)	((PI_VALUE) * (x) * (x))

int main(void){

	float area_circle;

//	area_circle = AREA_OF_CIRCLE(2);
	area_circle = AREA_OF_CIRCLE(1+1);

	printf("Area : %f\n",area_circle);


	return 0;
}


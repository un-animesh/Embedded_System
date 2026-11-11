/*
 * main.c
 *
 *  Created on: 08-Nov-2026
 *      Author: animesh
 */

#include<stdio.h>
#include<stdint.h>
int main(){
	char msg1[] = "Hello Who are U?";
	char const *pMsg1 = "un-animesh.vercel.app";

	msg1[0] = 'D';
//	pMsg1[2] = '_';

	printf("The value of msg1 is:%s\n",msg1);
	printf("The value of pMsg1 is:%s\n",pMsg1);
	printf("The address of pMsg1 is:%p\n",&pMsg1);
	printf("The address of pMsg1 is:%p\n",pMsg1);

	return 0;
}

/*
 * main.c
 *
 *  Created on: 08-Nov-2026
 *      Author: animesh
 */
#include<stdio.h>
#include<stdint.h>
int main(){
	char name[30];
	printf("Enter your Name:\n");
	fflush(stdout);
	scanf("%s",&name);

	printf("Hlw, %s\n",name);
	fflush(stdout);

	for(int i = 0; i < 30; i++){
		printf("%d  ",name[i]);
		fflush(stdout);
	}
	return 0;
}


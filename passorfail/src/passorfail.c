/*
 ============================================================================
 Name        : passorfail.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float mark;
	printf("mark achived in examination");
	scanf("%f",&mark);
	if(mark>50)
	{
	printf("passed");


	}
	else{
		printf("failed");
	}
	return EXIT_SUCCESS;
}


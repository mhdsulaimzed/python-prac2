/*
 ============================================================================
 Name        : switch.c
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
	printf("plese enter your mark");
	scanf("%f",&mark);
	if(mark>=90)
	{
		printf("A");
		}
	else if(80>=mark<=89)
	{
		printf("B");
	}
	else if(mark>=70&&mark<=79)
	{
		printf("C");
	}
	else if(mark>=60&&mark<=69)
	{
		printf("D");
	}
	else if(mark>=50&&mark<=59)
	{
		printf("E");
	}
	else if(mark<50)
	{
		printf("failed");
	}

	/* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}

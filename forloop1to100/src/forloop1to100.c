/*
 ============================================================================
 Name        : forloop1to100.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int limit;
	printf("enter the number of staers to be printed");
	scanf("%d",&limit);
	for(int i=1;i<=limit;i++)
	{
		for(int j=limit;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}

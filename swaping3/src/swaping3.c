/*
 ============================================================================
 Name        : swaping3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,c,temp1;

	printf("enter 3 numbewrs"); /* prints !!!Hello World!!! */
    scanf("%d%d%d",&a,&b,&c);
    temp1=a;
    a=b;
    b=c;
    c=temp1;
    printf("%d%d%d",a,b,c);

    return EXIT_SUCCESS;
}

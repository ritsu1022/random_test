/*
 ============================================================================
 Name        : random_test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int i;
	srand((unsigned)time(NULL));
	for(i=0; i<10; i++) {
		printf("%d\n",rand());
	}
	return EXIT_SUCCESS;
}

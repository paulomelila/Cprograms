#include <stdio.h>

int main() {
	int var;
	int *ptr;
	int **pptr;
	
	var = 2017;

	/* take the address of var */
	ptr = &var;

	/* take the address of ptr using 'address of' operator & */
	pptr = &ptr;
	
	printf("Content of var = %d\n", var);
	printf("Content of *ptr = %d\n", *ptr);
	printf("Content of **ptr = %d\n", **pptr);

	return 0;
}


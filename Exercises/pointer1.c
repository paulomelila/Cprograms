#include <stdio.h>

int main() {

	int var = 20;
	int* ip; /* pointer variable */
	ip = &var; /* store address of var in pointer variable */
	printf("Address of var variable: %x\n", &var);
	printf("Address stored in ip variable: %x\n", ip);
	
	/* access the content(value) using the pointer */
	printf("Content of ip(&var) variable: %d\n", *ip);
	
	int *ptr = NULL; // The NULL pointer is a constant with a value of zero 
					 // defined in several standard libraries 
	printf("The value of ptr is %x\n", ptr);

	return 0;
}

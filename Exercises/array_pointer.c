#include <stdio.h>

int main() {
	
	int numbers[5] = {10, 9, 8, 7, 6};
	int *p;
	int i;

	p = numbers; /* &numbers[0] */

	printf("Array values using pointer\n");

	for(i = 0; i < 5; i++) {
		printf("*(p + %d) = %d\n", i, *(p + i));
	}

	for(i = 0; i < 5; i++) {
		printf("*(numbers + %d) = %d\n", i, *(numbers + i));
	}
	return 0;
}

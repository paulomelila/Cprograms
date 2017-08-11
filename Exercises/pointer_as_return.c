#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* function to generate and return random numbers as int[] (int *) */

int* get_random() {
	time_t t;
	static int randoms[10];
	
	/* set the seed */
	srand((unsigned) time(&t)); // initialize random number generator

	for (int i = 0; i < 10; i++) {
		randoms[i] = rand() % 50;
		printf("randoms[%d] = %d\n", i, randoms[i]);
	}

	return randoms;
}

int main() {
	int *p;

	p = get_random();

	for(int i = 0; i < 10; i++) {
		printf("*(p + %d) = %d\n", i, *(p + i));
	}
	
	return 0;

}

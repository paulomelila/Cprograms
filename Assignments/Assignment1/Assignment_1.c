#include <stdio.h>

int main() {

// QUESTION 1
printf("Hello, world!\n");

printf("\n");
// QUESTION 2

// I. 0 2 4 6 8
// II. 100 93 86 79 72 65 58 51 44 37 30 23 16 9 2
// III. 1 2 3 4 5 6 7 8 9 10
// IV. 2 4 8 16 32 64

// QUESTION 3
int i, j;

for (i=1; i<11; i++) {
j = i*i;
printf("%d\t", i);
printf("%d\n", j);
}

printf("\n");
// QUESTION 4

int star, row;

for (row=1; row <11; row++) {
	for (star = 1; star <= row; star++) {
	printf("* ");
	}	
	printf("\n");
}

return 0;
}



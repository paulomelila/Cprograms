#include <stdio.h>

// define identifier value
#define MAX_NUM 1024
#define TRUE 1
#define FALSE 0
#define NEW_LINE '\n'

int main() {
	// const prefix to declare constants with a specific type
	int i = 10 + 2 + MAX_NUM;
	const char NEWLINE = '\n';	

	printf("%d\n", i);
	printf("%d\n", 0xab);
	printf("%d\n", 215u);
	printf("%ld\n", 30l);
	printf("%lu\n", 201ul);
	printf("%d\n", 011);

	printf("%f\n", 3.1415);
	printf("%Lf\n", 31415E-5L);
	
	printf("%c\n", 'x');
	printf("%c\n", 'a');
	printf("%c\n", '\t');
	printf("%c\n", '\"');
	
	if (TRUE) {
		printf("This is TRUE!\n");
	}

	return 0;
}


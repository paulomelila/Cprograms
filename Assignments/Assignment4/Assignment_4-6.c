#include <stdio.h>

int main() {
	int c;
	while((c = getchar()) != EOF)
	printf("This character %c : value of :  %d\n", c, c);

	return 0;
}

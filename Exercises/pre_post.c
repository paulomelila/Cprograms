#include <stdio.h>

int main() {

	int a = 10;
	
	int j = ++a;
	int k = a++;
	printf("j: %d, k: %d\n",j, k);
	printf("a: %d", a);

	return 0;
}

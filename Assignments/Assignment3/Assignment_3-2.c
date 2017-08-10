#include <stdio.h>

int multbytwo(int x) {
 	return x * 2;
}

int main () {
	for(int i = 1; i<=10; i++) {
		printf("%d * 2 = %d\n", i, multbytwo(i));
	}

return 0;
}

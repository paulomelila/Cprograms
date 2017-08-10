#include <stdio.h>

void celsius () {
	for (int f = -40; f <= 220; f+=10) {
		float c = 5/9.0 * (f - 32);
		printf("F:%d, C:%f\n", f, c);
	}
}

int main () {
celsius();

return 0;
}

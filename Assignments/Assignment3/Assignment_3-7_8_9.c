#include <stdio.h>
#include <stdlib.h>

void dice_rolling() {
	int i;
	int d1,d2;
	int a[13];
	int sum = 0;

	for(i =2; i <=12; i++){
		a[i] = 0;
	}

	for(i = 0; i<100; i++){
		d1 = rand()%6 + 1;
		d2 = rand()%6 + 1;
		a[d1 + d2] += 1;
	}

	for(i = 2; i<=12; i++){
		printf("%d: %d", i, a[i]);
		for(int j = 0 ; j < a[i]; j++){
			printf(" %c", '*');
		}
		printf("\n");
		sum += a[i];
	}

	float ave = sum / 13.0;
	printf("Question 7: %f\n", ave);
}

int randrange(int m, int n) {
return rand()/(RAND_MAX/n + m);
}

int main () {
dice_rolling();

printf("Question 8: %d\n", randrange(1,10));

return 0;
}

#include <stdio.h>

void swap_wrong(int x, int y){
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void swap(int *px, int *py) {
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}

double get_average(int *arr, int size) {
	int sum = 0;
	double avg;

	for(int i = 0; i < size; i++){
		sum += arr[i];
	}
	avg = (double) sum / size;
	
	return avg;
}

int main() {
	int a = 10;
	int b = 7;
	swap(&a, &b);
	printf("a: %d, b: %d\n", a, b);

	int transaction[5] = {1000, 2000, 1500, 900, 1200};
	double avg = get_average(transaction, 5);
	printf("The average is: %f\n", avg);

	return 0;
}


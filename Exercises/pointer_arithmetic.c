#include <stdio.h>

const int MAX = 3;

void increment() {
	int arr[] = {10, 100, 200};
	int i, *ptr;

	ptr = arr; /* arr address in pointer */
	for (i = 0; i < MAX; i++) {
		printf("Address of arr[%d] = %x\n", i, ptr);
		printf("Content of arr[%d] = %d\n", i, *ptr);
		ptr++; // move to the next location 
	}
}

void pointer_comparison () {
	int arr[] = {10, 100, 200};
	int i, *ptr;

	ptr = arr; /* arr address in pointer */
	int i = 0;
	while (ptr <= &arr[MAX-1]) {
		printf("Address of arr[%d] = %x\n", i, ptr);
		printf("Content of arr[%d] = %d\n", i, *ptr);
		ptr++;
		i++;
	}

}

int main() {
	int arr[] = {10, 100, 200};
	int i, *ptr;

	ptr = arr; /* arr address in pointer */
	for (i = MAX; i > 0; i--) {
		printf("Address of arr[%d] = %x\n", i, ptr);
		printf("Content of arr[%d] = %d\n", i, *ptr);
		ptr--; // move to the previous location 
	}

	return 0;
}

#include <stdio.h>

const int MAX = 3;

void pointers_of_string() {
	// Use an array of pointers to char to store a list of strings.
	char *names[] = { "Derrick", "John", "Brian", "Glen" };
	// char **names;
	for(int i = 0; i < 4; i++) {
		printf("The Content of names[%d] = %s\n", i, names[i]);
	}
}

int main() {
	pointers_of_string();

	int var[] = {10, 100, 200};
	int i, *ptr[MAX];
	
	for(i = 0; i < MAX; i++) {
		ptr[i] = &var[i]; 
	}
	
	for(i = 0; i < MAX; i++) {
		printf("The content of var[%d] = %d\n", i, *ptr[i]);
	}
	return 0;
}

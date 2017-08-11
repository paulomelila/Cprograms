#include <stdio.h>
#include <string.h>
/*
 * A union is a special data type that allows to store different data types in the same memory location.
 * You can define a union with many members, but only one member can contain a value at any given time.
 * Unions provide an efficient way of using the same memory location for multiple purpose.
 *
 */

union Data {
	int i;
	float f;
	char str[20];
}; 

//
// A variable of 'union Data' type can store an int, float, or string.
// It means a single variable at the 'same' memory location can be used to store multiple types of data.
// The memory occupied by a union will be large enough to hold the 'largest' member of the union.
// For our example, 'union Data' type will occupy '20 bytes' of memory space because this is the maximum
// space that can be occupied by a char[20] str. 
//

int main() {

	union Data data1;
	data1.i = 10;
	data1.f = 220.12;
	strcpy(data1.str, "C programming");
	
	printf("Memory size occupied by data: %lu\n", sizeof(data1));
	printf("data1.i : %d\n", data1.i);
	printf("data1.f : %f\n", data1.f);
	printf("data1.str : %s\n", data1.str);
	
	union Data data2;
	data2.i = 7;
	printf("data2.i : %d\n", data2.i);
	data2.f = 12.12;
	printf("data2.f : %f\n", data2.f);
	strcpy(data2.str, "Lab 3 and 4");
	printf("data2.str : %s\n", data2.str);


	return 0;
}

#include <stdio.h>

/* Function Pointer 
 *
 * 1. Unlike normal pointers, a function pointer points to code, not data.
 *	  Typically a function pointer stores the start of executable code.
 *
 * 2. Unlike normal pointers, we do not allocate de-allocate memory using function pointers.
 *
 * 3. A function's name can also be used to get functions' address.
 *    (& is optional). (* is optional - when calling a function)
 *
 * 4. Like normal pointers, we can have an array of function pointers.
 *
 * 5. Function pointer can be used in place of switch case.
 *
 * 6. Like normal pointers, a function pointer can be passed as an argument and can also be returned
 *    from a function.
 *
 * 7. Many object-oriented features are implemented using function pointers in C.
 *    Class methods are implemented using function pointers.
 */

void add(int a, int b){
	printf("Addition is %d\n", a + b);
}

void subtract(int a, int b){
	printf("Subtraction is %d\n", a - b);
}

void multiply(int a, int b){
	printf("Multiplication is %d\n", a * b);
}

void fun(int a) {
	printf("Value of a is %d\n", a);
}

void fun1() { printf("Fun1 called\n"); }

void fun2() { printf("Fun2 called\n"); }

void wrapper(void (*inner_fun)()) {
	inner_fun();
}

int main() {
	/* passing as an argument */
	wrapper(fun1);
	wrapper(fun2);

	void (*fun_ptr)(int) = &fun;
	(*fun_ptr)(10);

	/* An array of function pointers */
	void (*fun_ptrs[])(int, int) = { add, subtract, multiply };	
	int mode;
	printf("Enter Choice: (0 for addition, 1 for subtraction and 2 for multiplication)\n");
	scanf("%d", &mode);
	int a = 15, b = 10;

	if (mode > 2) return 0;
	(*fun_ptrs[mode])(a, b);

	return 0;
}

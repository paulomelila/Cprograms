// RECURSION

#include <stdio.h>

// QUESTION 1

int factorial (int n) {
if (n==1)
return 1;

return n * factorial(n-1);
}

// QUESTION 2

int fibonacci(int n) {
if (n<2)
return n;

return fibonacci(n-2) + fibonacci (n-1);
}

// QUESTION 3

int bunnyEars(int bunny) {
if (bunny==0)
return 0;

if (bunny%2 == 1)
return 2 + bunnyEars(bunny-1);

return 3 + bunnyEars(bunny-1);
}

// QUESTION 4

int powerN(int base, int n) {
if (n==1)
return base;

return base * powerN(base, n-1);
}

// QUESTION 5

int sumDigits(int n) {
if (n<10)
return n;

return sumDigits(n/10) + (n%10);
}

// ANSWERS
int main() {
       	printf("Exercise 1\n");
       	printf("%d\n", factorial(1));
	printf("%d\n", factorial(2));
	printf("%d\n", factorial(3));
	
	printf("\n");        

        printf("Exercise 2\n");
        printf("%d\n", fibonacci(0));
	printf("%d\n", fibonacci(1));
	printf("%d\n", fibonacci(2));

	printf("\n");

 	printf("Exercise 3\n");
        printf("%d\n", bunnyEars(0));
	printf("%d\n", bunnyEars(1));
	printf("%d\n", bunnyEars(2));

	printf("\n");

 	printf("Exercise 4\n");
        printf("%d\n", powerN(3,1));
	printf("%d\n", powerN(3,2));
	printf("%d\n", powerN(3,3));

	printf("\n");

	printf("Exercise 5\n");
       	printf("%d\n", sumDigits(126));
	printf("%d\n", sumDigits(49));
	printf("%d\n", sumDigits(12));
	
	return 0;
}

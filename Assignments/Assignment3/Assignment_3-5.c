#include <stdio.h>

int factorial (int n) {
if (n==1) 
return 1;

return n * factorial (n-1);
}

int main () {
printf("%d\n", factorial(1));
printf("%d\n", factorial(2));
printf("%d\n", factorial(3));
printf("%d\n", factorial(4));
printf("%d\n", factorial(5));
printf("%d\n", factorial(6));
printf("%d\n", factorial(7));
printf("%d\n", factorial(8));
printf("%d\n", factorial(9));
printf("%d\n", factorial(10));

return 0;
}

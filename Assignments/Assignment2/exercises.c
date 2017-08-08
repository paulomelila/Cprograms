// EXERCISES

#include <stdio.h>

int main () {

// EXERCISE 1
printf("EXERCISE 1\n");	
int i;
int j=0;
for (i=1; i<=10; i++){
	if(i>3)
	j++;
}
printf("%d\n", j);

printf("\n");
// EXERCISE 2
printf("EXERCISE 2\n");
int a,b;
int sum=0;
for (a=1; a<=10; a++){
	b=a*a;
	sum = sum+b;
}
int average = sum/10;
printf("%d\n", average);

printf("\n");
// EXERCISE 3
printf("EXERCISE 3\n");
int z;
for (z=1;z<=10; z++){
	if (z%2==0){
	printf("%d is even\n",z);
	} else 
	printf("%d is odd\n", z);
}

printf("\n");
// EXERCISE 4
printf("EXERCISE 4\n");
int k;
int l=1;
for (k=1;k<=7;k++){
	l=l*k;
	printf("%d  %d\n",k,l);
// only the first 7 because the factorial of 8 is too long to be considered an integer.
}

printf("\n");
// EXERCISE 5
printf("EXERCISE 5\n");
int c,d;
int fib=1;
int first = 0;
for (c=0; c<=10;c++){
	 printf("%d\n", fib);
	d = fib;
	fib = fib+first;
	first=d;
}

return 0;

}

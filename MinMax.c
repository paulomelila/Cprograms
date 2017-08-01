#include <stdio.h>
#include <limits.h>
#include <float.h>

// sizeof()
//
//	
int main() {

printf("The MIN value you can store in (SIGNED CHAR) variable is %d\n", SCHAR_MIN);
printf("The MAX value you can store in (SIGNED CHAR) variable is %d\n", SCHAR_MAX);

printf("The MIN value you can store in (UNSIGNED CHAR) variable is %d\n", UCHAR_MIN);
printf("The MAX value you can store in (UNSIGNED CHAR) variable is %d\n", UCHAR_MAX);

printf("MAX value of char: %lu\n", sizeof(char));

printf("The MIN value you can store in (SHORT INT) variable is %d\n", SHRT_MIN);
printf("The MAX value you can store in (SHORT INT) variable is %d\n", SHRT_MAX);

printf("The MIN value you can store in (INT) variable is %d\n", INT_MIN);
printf("The MAX value you can store in (INT) variable is %d\n", INT_MAX);
printf("MAX value of int: %lu\n", sizeof(int));

return 0;
}

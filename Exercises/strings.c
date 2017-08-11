#include <stdio.h>
#include <string.h>

/*
 *
 * <string>
 *
 * one-dimensional array of characters terminated by a null character '\0'
 * e.g "Hello" -> { 'H', 'e', 'l', 'l', 'o', '\0' } 
 *
 */ 


void str_functions() {
	char str1[12] = "Hello";
	char str2[12] = "World";
	char str3[12];
	int len;

	/* copy str1 into str3 */
	strcpy(str3, str1);
	printf("strcpy(str3, str1): %s\n", str3);

	/* concatenates str1 and str2 */
	strcat(str1, str2);
	printf("strcat(str1, str2): %s\n", str1);

	/* length of str1 after concatenation */
	len = strlen(str1);
	printf("strlen(str1): %d\n", len);
	
	// more...
	// strcmp(s1, s2) - returns 0 if s1 and s2 are the same; less than 0 if s1 < s2;
	//					greater than 0 if s1 < s2
	//
	// strstr(s1, s2) - returns a pointer to the first occurrence of string s2 in s1.
	//
	// strchr(s1, ch) - returns a pointer to the first occurrence of char ch in string s1.
	//
	printf("strcmp(\"abc\", \"def\") = %d\n", strcmp("abc", "def"));
	
	char *ret;
	ret = strstr("CornerStone", "Stone");
	printf("The substring is: %s\n", ret);

	char *r;
	r = strchr("www.google.ca", '.');
	printf("String after ch: %c is - %s\n", '.', r);
	
}


int main() {

	str_functions();
	char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
	char greetings[] = "Hello";
	char *greet = "Hello";

	printf("greeting = %s\n", greeting);
	printf("greetings = %s\n", greetings);
	printf("greet = %s\n", greet);
	
	printf("*greeting = %c\n", *greeting);
	printf("*greet = %c\n", *greet);

	for(int i = 0; i < 5; i++) {
		printf("greeting[%d] = %c\n", i, greeting[i]);
		printf("*(greet + %d) = %c\n", i, *(greet + i));
	}

}

#include <stdio.h>


void get_put_char() {
	int c;
	printf("Enter a value: ");
	c = getchar();

	printf("\nYou entered: ");
	putchar(c);
}

void gets_puts() {
	// char* gets(char* s) -> reads a line from stdin into the buffer pointed by s
	// until either a terminating newline or EOF(End Of File).
	// 
	// int puts(const char* s) -> writes the string s and a trailing newline to stdout
	char str[100];

	printf("Enter a value: ");
	gets(str);

	printf("\nYou entered: ");
	puts(str);

}

void scanf_printf() {
	char str[100];
	int i;
	printf("enter a value: ");
	scanf("%s %d", str, &i);

	printf("\nYou entered: %s %d", str, i);
}

int main() {
	get_put_char();	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 100

int getlines(char line[], int max) {
int nch = 0;
int c;
max = max - 1;

while((c = getchar()) != EOF) {
	if(c == '\n')
	break;

	if(nch < max) {
	line[nch] = c;
	nch = nch + 1;
	}
}
	if(c == EOF && nch == 0)
	return EOF;
	line[nch] = '\0';
	return nch;
}

int main() {
double balance = 0.0;
char line1[MAXLINE], line2[MAXLINE];

while(getlines(line1, MAXLINE) > 0) {
	getlines(line2, MAXLINE);

	if (strcmp(line1, "deposit") == 0)
	balance += atof(line2);
	else if (strcmp(line1, "check") == 0)
	balance -= atof(line2);
	else	{
		printf("bad data line: not \"check\" or \"deposit\"\n");
		continue;
	}

	printf("balance: %.2f\n", balance);
}

return 0;
}

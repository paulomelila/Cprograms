#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int getlines(char line[], int max) {
 int nch = 0;
 int c;
 max = max - 1;

while((c = getchar()) != EOF) {
	      if(c == '\n')
	            break;
	      if(nch < max) 
	      {
          	 line[nch] = c;
		 nch = nch + 1;
    }
}

if(c == EOF && nch == 0)
    return EOF;

       line[nch] = '\0';
          return nch;	  
}

int myatoi(char str[]) {
int retval = 0;
int i = 0;
int negflag = 0;
while(isspace(str[i]))	
	i++;

if(str[i] == '-') {				
	negflag = 1;
	i++;
}

while(str[i] != '\0' && isdigit(str[i])) {
int digit = str[i] - '0';
retval = 10 * retval + digit;
i++;
}

if(negflag) {
retval = -retval;
return retval;
}
}

int main() {		
char line[100];
int n;

while(1) {	
printf("Enter a number: \n");
if(getlines(line, 100) == EOF)
break;

n = myatoi(line);	
printf("You entered: %d\n", n);
}

return 0;
}

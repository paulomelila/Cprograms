// The C preprocessor is not part of a compiler, but is a separate step
// in the compilation process. In simple terms, a C preprocessor is just 
// a text substitution tool and it instructs the compiler to do required 
// pre-processing before the actual compilation.

#define MAX_ARRAY_LENGTH 20
#include <stdio.h>
//#include "myheader.h"

#undef FILE_SIZE
#define FILE_SIZE 42

#ifndef MESSAGE
	#define MESSAGE "YOU ROCK!"
#endif

// if you pass the -DDEBUG flag to the gcc compiler at the time
// of compilation.
 
#ifdef DEBUG
	/* Your debugging statements */
#endif

// (#) operator - Stringize, it converts a macro parameter into a string constant.
// This operator may be used only in a macro having a specified argument or parameter list.
#define message_for(a, b) \
	printf(#a " and " #b ": We love  you!\n")

#define tokenpaster(n) printf("token" #n " = %d\n", token##n)
// (##) operator - token-pasting operator: it combines two arguments.
// It permits two separat tokens in the macro def to be joined into a single token.

#define forever for(;;) /* infinite loop */

int square(int x) {
	return x * x;
}

#define square(x) ((x) * (x))
#define MAX(x, y) ((x) > (y) ? (x) : (y))

int main() {

	square(2 + 3);
	int token34 = 40;
	tokenpaster(34);

	message_for(Derrick, Starbucks);
	/* printf("File: %s\n", __FILE__); */
	/* printf("Date: %s\n", __DATE__); */
	/* printf("Time: %s\n", __TIME__); */
	/* printf("Line: %d\n", __LINE__); */
	/* printf("ANSI: %d\n", __STDC__); */
	// Defined as 1 when the compiler compiles with the ANSI standard.
	return 0;
	
}

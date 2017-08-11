#include <stdio.h>
#include <string.h>
/* Structure (struct) is another user defined data type that 
 * allows to combine data items of different kinds.
 */

struct Books { 
	// members
	char title[50]; 
	char author[50]; 
	char subject[100]; 
	int book_id; 
};

void printBook(struct Books *b) {
	/* To access the members of a struct using a pointer to that struct
	 * you 'must' use the -> operator 
	 *
	 */
	printf("Book title: %s\n", b->title);	
	printf("Book author: %s\n", b->author);
	printf("Book subject: %s\n", b->subject);
	printf("Book id: %d\n", b->book_id);
}

int main() {
	struct Books book1;
	struct Books book2;
	
	/* struct Books *book3; */
	/* strcpy(book3->title, "Hello"); */
	/* strcpy(book3->author, "Adele"); */
	/* strcpy(book3->subject, "Say Hello"); */
	/* book3->book_id = 3; */

	strcpy(book1.title, "C programming");
	strcpy(book1.author, "Kernighan and Ritchie");
	strcpy(book1.subject, "C programming Textbook");
	book1.book_id = 1;

	strcpy(book2.title, "Linux Commands, Editors and Shell Programming");
	strcpy(book2.author, "Mark G. Sobell");
	strcpy(book2.subject, "Learning Linux command line tools.");
	book2.book_id = 2;

	/* print book1 info */
	printBook(&book1);
	
	/* print book2 info */
	printBook(&book2);
		
	/* print book3 info */
	/* printBook(book3); */

	return 0;
}


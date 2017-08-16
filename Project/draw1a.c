#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Defining types to be read.
#define Image "Image"
#define lineTo "lineTo"
#define End "End"
#define print "print"
#define draw "draw"
#define translate "translate"
#define child "child"
#define comment "#"

int main(int argc, char *argv[]) {
char const *path = argv[1];
char const *fileName = "inputfile.1";

printf("%s started on ", argv[0]);
fflush(stdout);
system("date");

FILE *fp;
fp = fopen(fileName, "r");

printf("Input file: ./%s\n", fileName);

char line[256];

// Initializing the count for each type
int image_count = 0;
int lineTo_count = 0;
int End_count = 0;
int print_count = 0;
int draw_count = 0;
int translate_count = 0;
int child_count = 0;
int comment_count = 0;

while(fgets(line, 256, fp) != NULL){
        fscanf(fp, "%s", line);

        if(strcmp(line, Image) == 0){
            image_count++;
	}
	else if(strcmp(line, lineTo) == 0){
	    lineTo_count++;
	}
	else if(strcmp(line, End) == 0) {
	    End_count++;
	}
	else if(strcmp(line, print) == 0){
            print_count++;
	}
	else if(strcmp(line, draw) == 0){
            draw_count++;
	}
	else if(strcmp(line, translate) == 0){
            translate_count++;
	}
	else if(strcmp(line, child) == 0){
            child_count++;
	}
	else if(strcmp(line, comment) == 0){
            comment_count++;
	}
}

// Printing the number of times each type occurs.
printf("%d Image definition(s)\n", image_count);
printf("%d lineTo command(s) within Figures\n", lineTo_count);
printf("%d End command(s)\n", End_count);
printf("%d print command(s)\n", print_count);
printf("%d draw command(s)\n", draw_count);
printf("%d translate command(s)\n", translate_count);
printf("%d child command(s)\n", child_count);
printf("%d comment(s)\n", comment_count);

fclose(fp);

return 0;
}

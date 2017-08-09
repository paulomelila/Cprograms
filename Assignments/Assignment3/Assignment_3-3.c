#include <stdio.h>

square() {
int i, j;

for (i=1; i<11; i++) {
j = i*i;
printf("%d\t", i);
printf("%d\n", j);
}

}

int main() {

printf(square());

return 0;
}

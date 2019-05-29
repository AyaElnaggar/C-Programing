#include <stdio.h>

int main() {

	int x = 5;
	while (x--) {
		printf("%d ", x);
	}
	printf("\n");


	int z = 10;
	do {
		z--;
		int x = 10;
		printf("%d ", x);
	} while (z);
	printf("\n");


	int c = 5, no = 10;
	do {
		no /= c; // no = no/c;  //PROBLEM--> run-time error: integer division by zero 
	} while (c--); // condition over c only because it is c--, not --c .
	printf("%d", no);


	return 0;
}
#include <stdio.h>

int main() {
	char check = 'a';

	switch (check) {
	case 'a': 
		printf("Embedded ");
	case 'b': 
		printf("Systems ");
		break;
	default:
		printf("Embedded Systems");
	}
	// output: Embedded Systems
	printf("\n");



	// note 1: || is a logical operator --> output will be true or false
	// note 2: 'a' will be saved as ascii value of 'a' not 'a'
	// note 3: any number 1,2,3,.. except 0 is true
	printf("'a'||1: %d \n", 'a' || 1); // output: 1
	printf("'a'||0: %d \n", 'a' || 0); // output: 1
	printf("'a'||2: %d \n", 'a' || 2); // output: 1



	switch (check) {
	case 'a' || 1:
		printf("Embedded ");
	case 'b':
		printf("Systems ");
		break;
	default:
		printf("Embedded Systems");
	}
	// output: Embedded Systems
	printf("\n");


	switch (check) {
	case 'a' || 1:
		printf("Embedded ");
	case 1: // PROBLEM: compilation error --> case value 1 already used
		printf("Systems ");
		break;
	default:
		printf("Embedded Systems");
	}
	printf("\n");


	switch (check) {
	case 'a' || 1:
		printf("Embedded ");
	case 'b' || 2: // PROBLEM: compilation error --> case value 1 already used
		printf("Systems ");
		break;
	default:
		printf("Embedded Systems");
	}
	printf("\n");


	return 0;
}
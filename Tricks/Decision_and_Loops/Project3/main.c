#include <stdio.h>

int main() {
	int i = 0;
	switch (i) {
	case 0:
		printf("Embedded \n"); // print "Embedded"
		break;
	case 1:
		printf("Systems \n");
		break;
	default:
		printf("Embedded Systems \n");
	}


	int i2 = 0;
	switch (i2) {
	case '0': // int (48)
		printf("Embedded \n");
		break;
	case '1': // int (49)
		printf("Systems \n");
		break;
	default:
		printf("Embedded Systems \n"); // print Embedded Systems
	}

	return 0;
}
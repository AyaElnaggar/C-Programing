/*
Write C Program to Check Whether a Character(Entered by user) is an Alphabet or not.
*/

#include <stdio.h>

//according to the ascii table 
#define a 97
#define z 122
#define A 65
#define Z 90
//possible outputs
#define ALPHABET "The character entered is an alphabet" 
#define NOT_ALPAHBET "The character entered is NOT an alphabet"

int main() {
	char c;
	printf("enter a char: \n");
	scanf_s("%c", &c);

	if ( (c<=z && c>=a) || (c<=Z && c>=A) ) {
		printf("%s", ALPHABET);
	}
	else {
		printf("%s", NOT_ALPAHBET);
	}
	return 0;
}
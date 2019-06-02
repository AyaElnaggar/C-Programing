/*
Write code to set bit and clear bit in char variable .Bit position according to user input.
*/

/*
	AND (&)
00	0
01	0
10	0
11	1
--> &0: clear bit, &1: constant

	OR (|)
00	0
01	1
10	1
11	1
--> |0: constant, |1: set bit

	XOR (^)
00	0 --> SAME
01	1 --> DIFFERENT
10	1 --> DIFFERENT
11	0 --> SAME
--> ^0: constant , ^1: toggle bit

*/

#include <stdio.h>

typedef unsigned int uint32;
typedef char uint8;

/*
// METHOD 1
char clearBit(char var , int bit) {
	printf("clearing .... \n");
	printf("var before: %c \n", var);
	var = var & ((~(1)) << bit);
	printf("var after: %c \n", var);
	return var;
}

char setBit(char var, int bit) {
	printf("setting .... \n");
	printf("var before: %c \n", var);
	var = var | (1 << bit);
	printf("var after: %c \n", var);
	return var;
}
*/

// METHOD 2
#define PRINT_MSG(msg) (printf("%s \n", msg))
#define PRINT_MSG_Var(msg,var) (printf("%s: %c\n", msg, var))

#define CLEAR_BIT(var, bit) PRINT_MSG("clearing ....");\
PRINT_MSG_Var("var before",var);\
var = var & ((~(1))<<bit);\
PRINT_MSG_Var("var after",var);

#define SET_BIT(var, bit) PRINT_MSG("setting ....");\
PRINT_MSG_Var("var before",var);\
var = var | (1 << bit);\
PRINT_MSG_Var("var after",var);


int main() {

	uint8 var;
	printf("enter the variable to be changed: \n");
	scanf_s(" %c", &var);

	uint32 pos;
	printf("enter the position of bit to be changed: \n");
	scanf_s(" %d", &pos);


	const uint8 var_c = var; // for saving the original value of variable

	var = var_c;
	//var = setBit(var,pos); //METHOD 1
	SET_BIT(var,pos); // METHOD 2

	var = var_c;
	//var = clearBit(var, pos); //METHID 1
	CLEAR_BIT(var,pos); //METHOD 2


	return 0;
}

/*
write code to print all possible operations(arithmetic / bit-wise) for two input operands.
*/

#include <stdio.h>

typedef int int32;

//arithmetic operations
#define ADD(x,y) (x+y)
#define SUB(x,y) (x-y)
#define MUL(x,y) (x*y)
#define DIV(x,y) (x/y)
#define MOD(x,y) (x%y)
//bit-wise operations
#define AND(x,y) (x&y)
#define OR(x,y) (x|y)
#define XOR(x,y) (x^y)
#define SHIFT_LEFT(x,y) (x<<y) // x shift left by y
#define SHIFT_RIGHT(x,y) (x>>y) // x shift right by y
#define NOT(x) (~x)

#define PRINT_MSG_INT(msg, num) (printf("%s %d \n", msg, num ))

int main() {

	int32 x, y, res;
	printf("enter operand 1: \n");
	scanf_s("%d", &x);
	printf("enter operand 2: \n");
	scanf_s("%d", &y);

	res = ADD(x, y); PRINT_MSG_INT("add. result: ", res);
	res = SUB(x, y); PRINT_MSG_INT("subt. result: ", res);
	res = MUL(x, y); PRINT_MSG_INT("mult. result: ", res);
	res = DIV(x, y); PRINT_MSG_INT("div. result: ", res);
	res = MOD(x, y); PRINT_MSG_INT("mod. result: ", res);

	res = AND(x, y); PRINT_MSG_INT("and result: ", res);
	res = OR(x, y); PRINT_MSG_INT("or result: ", res);
	res = XOR(x, y); PRINT_MSG_INT("xor result: ", res);
	res = SHIFT_LEFT(x, y); PRINT_MSG_INT("shift left result: ", res);
	res = SHIFT_RIGHT(x, y); PRINT_MSG_INT("shift right result: ", res);
	res = NOT(x); PRINT_MSG_INT("not result: ", res);

	return 0;
}
/*
Write code to multiply two Floating Point Numbers
	User is asked to enter two numbers (floating point numbers). 
	Then, the product of those two numbers is stored in a variable and displayed on the screen.
*/

/*
	int, unsigned int --> depend on size of data bus
	enum --> depend on size of int
*/

/*
	float -> 4 bytes in precision -> 16 bits in precision -> less accurate 
	double -> 8 bytes in precision -> 32 bits in precision -> more accurate
*/

#include <stdio.h>

int main() {
	/*
	sizeof(datatype)
		-used to compute the size of its operand. 
		-The result of sizeof is of unsigned integral type which is usually denoted by size_t. 
		-sizeof can be applied to any data-type
	*/
	printf("some info that may help... \n");
	printf("sizeof(float): %d \n", (int)sizeof(float)); // output: 4 
	printf("sizeof(double): %d \n", (int)sizeof(double)); // output: 8  ??
	printf("sizeof(long double): %d \n", (int)sizeof(long double)); // output: 8 ??
	printf("\n\n");

	float num1, num2;
	printf("enter floating point number, num1: \n");
	scanf_s("%f", &num1);
	printf("enter floating point number, num2: \n");
	scanf_s("%f", &num2);

	double result;
	result = (double)num1 * (double)num2;
	printf("the result: %lf \n", result);

	return 0;
}
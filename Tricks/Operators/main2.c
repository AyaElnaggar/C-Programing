#include <stdio.h>

int main() {
	/*	
				C Operator Precedence
			operators		   Associativity
		--> * / %
		--> + -
		--> << >>
		--> < <= > >=
		--> == !=
		--> &                  left-to-right
		--> ^
		--> |
		--> &&
		--> ||

		--> ?:                 right-to-left
		--> =, +=, -=,
			*=, /=, %=,
			<<=, >>=, &=,
			^=, |= 
	*/

	int x, y = 5, z = 5;
	x = y == z; // output: 1
	printf("%d", x);

	return  0;
}
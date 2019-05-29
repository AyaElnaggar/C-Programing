#include <stdio.h>

int main() {
	/* C Operator Precedence
		
		Operator  Associativity 
	--> * / %
	--> + -			Left-to-right 
	--> << >>

	*/

	printf("%d", 1 << 2 + 3 << 4); // output: 512
	return 0;
}
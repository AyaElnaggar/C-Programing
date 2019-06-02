/*
Write C Program to Calculate the Sum of Natural Numbers.
compute the sum of natural numbers from 1 to n (entered by the user)
*/

/*
Natural Number
-- The whole numbers from 1 upwards: 1, 2, 3, and so on ...
-- Or from 0 upwards in some fields of mathematics: 0, 1, 2, 3 and so on ...
-- No negative numbers and no fractions.
*/

#include <stdio.h>

typedef unsigned int uint32;

int main() {

	uint32 n;
	printf("enter n: \n");
	scanf_s("%lu", &n);

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("Sum: %lu", sum);
	
	return 0;
}
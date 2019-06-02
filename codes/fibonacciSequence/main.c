/*
Write C Program to Display Fibonacci Sequence
Display the Fibonacci sequence of first n numbers (entered by the user).
The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21...
*/

/*
Concept:
	Each number in the sequence is the sum of the two numbers that precede it. 
	So, the sequence goes: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, and so on. 
	The mathematical equation describing it is Xn+2= Xn+1 + Xn
*/

#include <stdio.h>

typedef unsigned int uint32;

int main(void) {
	printf("enter n : \n ");
	uint32 n;
	scanf_s("%lu", &n);

	uint32 arr[2];
	arr[0] = 0;
	arr[1] = 1;
	printf("%lu %lu ", arr[0], arr[1]);

	uint32 temp;
	for (int i = 2; i <= n; i++) {
		temp = arr[0] + arr[1];
		if (temp <= n) {
			printf("%lu ", temp);
			arr[0] = arr[1];
			arr[1] = temp;
		}
		else
			break;
	}

	return 0;
}
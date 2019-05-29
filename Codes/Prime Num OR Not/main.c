/*
Write C Program to Check Whether a Number is Prime or Not
*/

/*
By the usual definition of prime for integers, negative integers can not be prime. 
By this definition, primes are integers greater than one with no positive divisors besides one and itself. 
Negative numbers are excluded.
*/

#include <stdio.h>

#define PRIME "It is a prime number. "
#define NOT_PRIME "It is NOT a prime number. "

typedef unsigned int uint32;
typedef enum bool {false=0, true=1} bool;

int main() {

	uint32 n;
	printf("Enter a number to check whether it is a prime num. or not: \n");
	scanf_s("%lu", &n);

	bool isPrime = true;
	for (int i = 2; i < n; i++) {
		//go over all natural numbers from 1 to n; excluding 1 and itself ( in other words, n).

		if (n%i==0) {
			// no remindar
			// means that n is divisible by i
			// not prime number
			isPrime = false;
			break;
		}

	}

	if (isPrime) {
		printf(PRIME);
	}
	else {
		printf(NOT_PRIME);
	}


	return 0;
}
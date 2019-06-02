#include <stdio.h>

int main() {
	int x = 3;
	if (x == 2); // wil NOT cause an error
	x = 0;
	if (x == 3) x++;
	else x += 2;

	printf("x = %d", x); // output: x = 2

	return 0;
}
#include <stdio.h>

int main() {
	int i = 1024; // b 0100 0000 0000 --> 1 at 2^10
	for (; i; i >>= 1)
		printf("c "); // output: c c c c c c c c c c c --> print c 11 times
	return 0;
}
#include <stdio.h>

int main() {
	int s = 12;
	int d = sizeof(s++);
	printf("%d %d \n", s, d); // 12 4

	int i = 5, j = 10, k = 15;
	printf("%d \n", sizeof(k /= i + j)); // 4
	printf("%d \n", k); // 15

	return 0;
}
#include <stdio.h>

int main() {

	int x, y = 5, z = 5;
	x = y == z; // 1, because of C percedence
	printf("%d", x);

	return  0;
}

#include <stdio.h>

int main() {
	printf("%d", 1 << 2 + 3 << 4); // 512, because of C percedence
	return 0;
}

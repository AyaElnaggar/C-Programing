#include <stdio.h>

int main() {
	/*
	int j = 1, 2, 3;
		//PROBLEM: syntax error, why? expect "int j= 1, z;"
	printf("%d \n", j);
	*/

	int f;
	f = 1, 2, 3;
	printf("%d \n", f); // 1, because of percedence of operators

	int i = (1, 2, 3);
	printf("%d \n", i); // 3, because of percedence of operators

	int k;
	k = (1, 2, 3);
	printf("%d \n", k); // 3, because of percedence of operators

	int x = 10;
	int y = (x++, 1, 2);
	printf("%d %d \n", x, y); // 11 2

	int x1 = 10;
	int y1= (x1++, x1++, 2);
	printf("%d %d \n", x1, y1); // 12 2

	int x2 = 10;
	int y2 = (x2++, x2++, x2++);
	printf("%d %d \n", x2, y2); // 13 12

	return 0;
}

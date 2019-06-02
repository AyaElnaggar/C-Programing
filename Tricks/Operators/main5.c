#include <stdio.h>

int main() {

	FILE * fp;
  /* open the file for writing*/
  fp = fopen ("out.txt","w");

	//note: output of sizeof(..) is of type unsigned long

	int s = 12;
	int d = sizeof(s++);
	fprintf (fp, "%d %d \n", s, d); // 12 4

	int i = 5, j = 10, k = 15;
	fprintf (fp,"%lu \n", sizeof(k /= i + j)); // 4
	fprintf (fp,"%d \n", k); // 15

	long double ld = 5;
	int x = 2, y = 3;
	char z =1;
	fprintf (fp,"%lu \n", sizeof(ld)); // 16
	fprintf (fp,"%lu \n", sizeof(z+x+ld)); // 16
	fprintf (fp,"%lu \n", sizeof(x=z+x+ld)); // 4
	fprintf (fp,"%lu \n", sizeof(z*x*ld)); // 16
	fprintf (fp,"%lu \n", sizeof(x+=y)); // 4
	fprintf (fp,"%d \n", x); // 2

	/* close the file*/
  fclose (fp);

	return 0;
}

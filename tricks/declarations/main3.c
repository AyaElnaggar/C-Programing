#include <stdio.h>

int main(){
     int r = 10;
     int f = r; // ??

    static int x = 10;
    static int y = x; // error: initializer element is not constant ??

    if(x==y)
        printf("equal");
    else if (x>y)
        printf("greater");
    else
        printf("less");

    return 0;
}

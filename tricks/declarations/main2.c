#include <stdio.h>

//data segment
int x = 3;
int y = x; // compile error, ??

int main(){
    printf("%d",y);

    return 0;
}

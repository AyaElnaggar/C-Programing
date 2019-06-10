#include <stdio.h>

int main(){

    static int i = 5;
    if(--i){
        main();
        printf("%d", i);
    }
    //output: 0000

    return 0;
}

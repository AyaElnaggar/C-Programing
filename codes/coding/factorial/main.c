/*
 write recursive function that return factorial of int number.
 */
#include <stdio.h>

#define FACTORIAL_ERROR "ERROR. Factorial can not be implemented on -ve number. \n"

typedef int int32;
typedef long int int64;

int64 factorial(int32 num);

int main(){
    int32 num;
    printf("enter num: \n");
    scanf("%d", &num);

    if(num<0){
        //no factorial for -ve number
        printf(FACTORIAL_ERROR);
    }else{
        int64 res;
        res = factorial(num);
        printf("res: %ld \n", res);
    }

    return 0;
}

int64 factorial(int32 num){
    if(num==0)
        return 1;
    else
        return (num*factorial(num-1));
}

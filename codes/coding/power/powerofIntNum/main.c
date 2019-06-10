/*
 write recursive function that return power of int number.
 */

#include <stdio.h>

typedef int int32;
typedef float f32;
typedef double f64;
typedef long double f128;

f128 getPower(f64 num, int32 power);

int main(){
    f64 num;
    int32 power;
    printf("enter num: \n");
    scanf("%lf", &num);
    printf("enter power: \n");
    scanf("%d", &power);

    f128 res = getPower(num,power);
    printf("res: %Lf \n", res);

    return 0;
}

f128 getPower(f64 num, int32 power){
    if(power<0){
        //change num, power
        power = power * -1;
        num = 1/num;
    }

    if(power==0){
        return 1;
    }else{
        return (num * getPower(num, power-1));
    }
}

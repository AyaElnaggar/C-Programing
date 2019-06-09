/*
 write recursive function that return power of int number.
 */

#include <stdio.h>

typedef int int32;
typedef float f32;
typedef double f64;
typedef long double f128;

void getInputs(f64 *num, int32 *power);
long double getPower(f64 num, int32 power);
void showRes(f128 res);

int main(){
    f64 num;
    int32 power;

    getInputs(&num, &power);
    double res = getPower(num,power);
    showRes(res);

    return 0;
}

void getInputs(f64 *num, int32 *power){
    printf("enter num: \n");
    scanf("%lf", num);
    printf("enter power: \n");
    scanf("%d", power);
}

long double getPower(f64 num, int32 power){
    static long double res=1;

    if(power<0){
        //change num, power
        power = power * -1;
        num = 1/num;
    }else if(power==0){
        return 1;
    }else if(power==1){
        res = res * num;
        return res;
    }

    //do operation for one time
    res = res * num;
    //call myself again
    getPower(num, power-1);

    return res;
}

void showRes(f128 res){
    printf("res: %Lf \n", res);
}

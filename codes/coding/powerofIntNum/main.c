/*
 write recursive function that return power of int number.
 */

#include <stdio.h>

void getInputs(double *num, int *power);
long double getPower(double num, int power);
void showRes(long double res);

int main(){
    double num;
    int power;

    getInputs(&num, &power);
    double res = getPower(num,power);
    showRes(res);

    return 0;
}

void getInputs(double *num, int *power){
    printf("enter num: \n");
    scanf("%lf", num);
    printf("enter power: \n");
    scanf("%d", power);
}

long double getPower(double num, int power){
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

void showRes(long double res){
    printf("res: %Lf \n", res);
}

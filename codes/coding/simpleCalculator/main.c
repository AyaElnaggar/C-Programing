/*
Write c program for simple calculator using functions
*/

#include <stdio.h>

#define DIVISIBLE_BY_ZERO_ERROR "ERROR! Divisible by zero. \n"
#define OPERATION_ERROR "ERROR! Operation selected is not available. \n"
#define ANOTHER_OPERATION_ERROR "ERROR! Do not get whether you want to implement another operation or not. \n"

typedef enum bool {false=0, true=1} bool;
typedef int int32;
typedef long int int64;
typedef char int8;
typedef float f32;
typedef double f64;
typedef long double f128;

void getTwoNum(f64 *num1, f64 *num2);
void getOperation(int8 *oper);
void implementOperation(f64 num1, f64 num2, int8 oper, f128 *res, bool *isError);
void showResult(f128 res, bool isError);
void anotherOperation(bool *isRepeat);

void add (f64 a, f64 b, f128 *res, bool *isError);
void sub (f64 a, f64 b, f128 *res, bool *isError);
void mul (f64 a, f64 b, f128 *res, bool *isError);
void divide (f64 a, f64 b, f128 *res, bool *isError);

int main(){
    f64 num1, num2;
    int8 oper;
    f128 res;
    bool isError;
    bool isRepeat;

    do{
        getTwoNum(&num1, &num2);
        getOperation(&oper);
        implementOperation(num1, num2, oper, &res, &isError);
        showResult(res, isError);
        anotherOperation(&isRepeat);
    }while(isRepeat==true);

    return 0;
}

void getTwoNum(f64 *num1, f64 *num2){
    printf("enter num1: \n");
    scanf("%lf", num1);

    printf("enter num2: \n");
    scanf("%lf", num2);
}
void getOperation(int8 *oper){
    printf("enter operation you want: + - / * \n");
    scanf(" %c", oper);
}

void add (f64 a, f64 b, f128 *res, bool *isError){
    *res = a+b;
    *isError = false;
}
void sub (f64 a, f64 b, f128 *res, bool *isError){
    *res = a-b;
    *isError = false;
}
void mul (f64 a, f64 b, f128 *res, bool *isError){
    *res = a*b;
    *isError = false;
}
void divide (f64 a, f64 b, f128 *res, bool *isError){
    if(b==0){
        printf(DIVISIBLE_BY_ZERO_ERROR);
        *isError = true;
    }else{
        *res = a/b;
        *isError = false;
    }
}

void implementOperation(f64 num1, f64 num2, int8 oper, f128 *res, bool *isError){
    switch(oper){
        case '+':
            add(num1, num2, res, isError);
            break;
        case '-':
            sub(num1, num2, res, isError);
            break;
        case '*':
            mul(num1, num2, res, isError);
            break;
        case '/':
            divide(num1, num2, res, isError);
            break;
        default:
            printf(OPERATION_ERROR);
            break;
    };
}

void showResult(f128 res, bool isError){
    if(isError==false){ // no error
        printf("The result: %Lf \n", res);
    }
}

void anotherOperation(bool *isRepeat){
    int8 c;
    printf("if u want to do another calculation, press Y. if not, press N. \n");
    scanf(" %c", &c);

    switch(c){
        case 'Y':
            *isRepeat = true;
            break;
        case 'N':
            *isRepeat = false;
            break;
        default:
            printf(ANOTHER_OPERATION_ERROR);
            anotherOperation(isRepeat);
            break;
    };
}

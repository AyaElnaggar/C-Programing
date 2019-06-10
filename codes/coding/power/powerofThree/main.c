/*
 Write C function that return 0 if a given number is a power of 3,
 otherwise return 1(except to the power 0)
 Example
 9 ==> 0
 20 ==> 1
 */

#include <stdio.h>

#define POWER_OF_THREE "0 \n"
#define NOT_POWER_OF_THREE "1 \n"
//max exponent that can be represented using unsigned integer
#define MAX_EXPONENT 20

typedef unsigned int uint32; // 0 -> (2^32)-1; 0 -> 4,294,967,295; 0 -> (3^20)
typedef enum bool {false=0, true=1} bool;

bool checkPowerofThree(unsigned int num);

int main(){
    uint32 num;
    printf("enter a number to check whether it is power of 3 or not: \n");
    scanf("%u", &num);

    if(checkPowerofThree(num)==true) printf(POWER_OF_THREE);
    else printf(NOT_POWER_OF_THREE);

    return 0;
}

bool checkPowerofThree(uint32 num){
    uint32 temp=1;
    for(int i=0; i<=MAX_EXPONENT; i++){
        //get all powers of 3
        for(int j=0; j<i; j++){
            if(j==0)
                temp=1;
            temp = temp*3;
        }
        //printf("temp %d: %u \n", i, temp);
        if(num==temp) return true;
    }
    return false;
}

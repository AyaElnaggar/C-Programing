/*
Write C Program to Check Whether a Number can be Expressed as Sum of Two Prime Numbers.
*/

#include <stdio.h>

#define SUM_OF_TWO_PRIME_NUM "num can be expressed as sum of two prime numbers \n"
#define NOT_SUM_OF_TWO_PRIME_NUM "num can NOT be expressed as sum of two prime numbers \n"

typedef unsigned int uint32;
typedef enum bool {false=0, true=1} bool;

void getNum(uint32 *num);
bool isPrime(uint32 num);
bool isSumofTwoPrimeNum(uint32 num, uint32 *sum1, uint32 *sum2);

int main(){
    uint32 num;
    getNum(&num);

    uint32 sum1, sum2;
    bool is_sumof_twoprimes = isSumofTwoPrimeNum(num, &sum1, &sum2);
    if(is_sumof_twoprimes){
        printf(SUM_OF_TWO_PRIME_NUM);
        printf("Those first two prime numbers are: %u , %u \n", sum1, sum2);
    }else{
        printf(NOT_SUM_OF_TWO_PRIME_NUM);
    }

    return 0;
}

void getNum(uint32 *num){
    printf("enter the number to check whether it can be expressed as sum of two prime numbers or not: \n");
    scanf("%d", num);
}

bool isPrime(uint32 num){
    bool is_prime = true;
    for(uint32 i=2; i<num; i++){
        if(num%i==0){
            //no reminder
            //num is divisible by i; where i is not 1 or itself
            //not prime
            is_prime = false;
            return is_prime;
        }
    }
    return is_prime;
}

bool isSumofTwoPrimeNum(uint32 num, uint32 *sum1, uint32 *sum2){
    uint32 part1, part2;
    bool isprime_part1, isprime_part2;
    bool is_sumof_twoprimes = false;

    for(uint32 i=2; i<num; i++){
        part1 = i;
        part2 = num - i;

        isprime_part1 = isPrime(part1);
        isprime_part2 = isPrime(part2);

        if(isprime_part1&&isprime_part2){
            is_sumof_twoprimes = true;
            *sum1 = part1;
            *sum2 = part2;
            return is_sumof_twoprimes;
        }
    }
    return is_sumof_twoprimes;
}

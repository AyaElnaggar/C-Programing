#include <stdio.h>

int fun(){
  static int num = 16;
  return num--;
}

int main(){
  for(fun(); fun(); fun()){
    //printf("%d", num); //error: ‘num’ undeclared (first use in this function)
    printf("%d ", fun()); //output 14 11 8 5 2
  }

  return 0;
}

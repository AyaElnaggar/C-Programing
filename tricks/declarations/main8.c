#include <stdio.h>

void foo(){
  printf("foo() \n");
}

void moo(){
  printf("moo() \n");
}

int main(){

  foo(), moo(), foo(); // it works, why ???
  return 0;
}

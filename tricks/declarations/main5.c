#include <stdio.h>

//global initiallized -> data segment
int var = 20;

int main(){

  //local variable --> stack
  int var = var;
  printf("%d", var); // output: 0 ??
  return 0;
}

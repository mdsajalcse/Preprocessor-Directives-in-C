//Preprocessor-Directives-in-C
//define
#include<stdio.h>
#define MAX(a,b) ((a)>(b) ? (a): (b))
int main(){

  printf("Large Value Between 10 & 20= %d\n", MAX(10,20));

  return 0;

}



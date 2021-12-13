#include <stdio.h>
#include <stdlib.h>


void foo(int valor) {
  unsigned char c;
  unsigned char *ptr = malloc(1);
  printf("Stack: %p | Heap: %p\n",&c, ptr);

  if(valor <= 0) return;

  foo(valor - 1);
}

int main(){
  foo(10);
  return 0;
}



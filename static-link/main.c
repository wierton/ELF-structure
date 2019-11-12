#include <stdio.h>

extern int func();

int main() {
  int val = func();
  printf("val is %d\n", val);
  return 0;
}

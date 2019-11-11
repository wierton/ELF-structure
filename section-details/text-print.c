#include <stdint.h>
#include <stdio.h>

int main() {
  extern unsigned char _start;
  for (unsigned char *p = &_start; p < &_start + 16; p++) {
    printf("%x, ", *p);
  }
  printf("\n");
  return 0;
}

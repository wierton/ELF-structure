#include <stdio.h>
#include <stdint.h>

int main() {
  asm volatile(".long 0x12345678, 0x12345678");
  return 0;
}

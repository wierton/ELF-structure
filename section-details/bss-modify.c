#include <stdint.h>
#include <stdio.h>

int bss_start[0] __attribute__((section(".bss")));

int a[1234];

int main() {
  extern unsigned __bss_start;
  // printf("%p, %p, %p\n", &bss_start, a, &__bss_start);

  (&__bss_start)[(0x40 - 0x1c) / 4] = 0x1234;
  printf("%x\n", a[0]);

  // bss_start[(0x40 - 0x24) / 4 + 1] = 0x5678;
  // printf("%x\n", a[1]);
  return 0;
}

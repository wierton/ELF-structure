#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

char got_start[0] __attribute__((unused, section(".got")));

int main() {
  printf("%p\n", system);
  printf("got_start is %p\n", got_start);
  ((void **)got_start)[4] = system;
  puts("ls -l");
  return 0;
}

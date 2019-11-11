#include <stdio.h>

int __attribute__((noinline)) breakpoint() { return 0; }

int main() {
  printf("Hello %s\n", "World");
  printf("Hello %s\n", "World");
  printf("%p\n", printf);
  breakpoint();
  return 0;
}

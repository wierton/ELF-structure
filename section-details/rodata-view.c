#include <stdio.h>
#include <string.h>

int main() {
  const char *s = "Hello World\n";
  // const char *s2[] = "Hello World\n";
  printf("%p, 0x%x\n", s, strlen(s) + 1);
  return 0;
}

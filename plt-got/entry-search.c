#include <stdio.h>

int main(int argc, const char *argv[]) {
  for (int *p = &argc; p < &argc + 200; p++) {
    printf("%d: %08x\n", p - &argc, *p);
  }
  return 0;
}

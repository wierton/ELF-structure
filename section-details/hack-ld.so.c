#include <stdio.h>
#include <syscall.h>
#include <unistd.h>

int main() {
  asm volatile("int $0x80" ::"a"(SYS_write), "b"(1),
               "c"("Hello World\n"), "d"(13));
  return 0;
}

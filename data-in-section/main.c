#include <stdio.h>

asm(".section .mysection, \"a\"\n"
    "my_section_start:\n"
    ".incbin \"data.txt\"\n"
    ".byte 0\n");
extern char my_section_start;

int main() {
  puts(&my_section_start);
  return 0;
}

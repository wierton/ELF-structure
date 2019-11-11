#include <stdio.h>
#include <stdlib.h>

int main() {
  int i;
  scanf("%d", &i);
  /* hack rodata: 0 */
  printf("case_0 is %p\n", &&case_0);
  switch (i) {
  case_0:
  case 0: printf("input is 0\n"); break;
  case 1: printf("input is 1\n"); break;
  case 2: printf("input is 2\n"); break;
  case 3: printf("input is 3\n"); break;
  case 4: printf("input is 4\n"); break;
  case 5: printf("input is 5\n"); break;
  case 6: printf("input is 6\n"); break;
  case 7: printf("input is 7\n"); break;
  case 8: printf("input is 8\n"); break;
  case 9: printf("input is 9\n"); break;
  default: printf("default case\n");
  }
  return 0;
}

#include <stdio.h>

const char *p = "Hello World\n";

int main() {
	printf("%c", *(char *)p = 'A');
	return 0;
}

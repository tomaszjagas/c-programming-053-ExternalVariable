#include <stdio.h>

extern int count;

void foo(void) {
	extern int i;
	i = 100;
}

void writeExtern(void) {
	printf("count is %d\n", count);
}
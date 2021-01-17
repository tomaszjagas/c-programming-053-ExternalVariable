#include <stdio.h>

int i = 5;
int count;

extern void writeExtern();

void foo(void);

int main(void) {
	count = 5;

	printf("%i\n", i);
	foo();
	printf("%i\n", i);

	writeExtern();

	return 0;
}
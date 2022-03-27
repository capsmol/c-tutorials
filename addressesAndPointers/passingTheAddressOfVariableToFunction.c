#include <stdio.h>

void foo(int* a)
{
	printf("Got: a = %d\n", *a);
	*a+= 10;
	printf("Did: a = %d\n", *a);
}

int main(int argc, char* argv[])
{
	int x = 7;
	printf("%d\n", x);
	foo(&x);
	printf("%d\n", x);
	return 0;
}
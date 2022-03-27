#include <stdio.h>

int main(int argc, char* argv[])
{
	int A[10] = {1, 2, 3, 4 , 5, 6, 7, 8, 9, 10};

	int x = *(A + 1); // == 2 || A[1]
	printf("x = %d\n", x);
	int *p = A + 5;
	int *q = A + 7;
	printf("p = %d\n", p[-1]);

	if (p > q)
		printf("p > q\n");
	else
		printf("p <= q\n");

	return 0;
}
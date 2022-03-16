// Classes alg:
// generators (a, b, c) ---> x1, x2, x3... xn
#include <stdio.h>

int main(int arvc, char* argv[]) {
	int x;
	scanf("%d", &x);
	while (x)
	{
		int digit = x % 10;
		if (digit < 5)
			printf("%d", digit);
		x /= 10;
	}
	printf("\n");
	

	return 0;
}
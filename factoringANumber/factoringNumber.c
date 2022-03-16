// P = p1 * p2 * p3 ... pn
#include <stdio.h>

void printNumberFactors(int x) {
	printf("Number factors: ");

	int divisor = 2;
	while (x != 1) {
		if (x % divisor == 0) {
			printf("%d ", divisor);
			x /= divisor;
		} else
			divisor += 1;
	}
	printf("\n");
}

int main(int argc, char* argv[]) {
	int x;
	printf("Enter number:\n");
	scanf("%d", &x);
	printNumberFactors(x);

	return 0;
}
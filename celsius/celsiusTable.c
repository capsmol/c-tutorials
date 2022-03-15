#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main (void) {
	float celsius, fahr;
	int lower = 0;
	int upper = 300;
	int step = 20;

	printf("Table fahr to celsius\n");
	printf("fahr: celsius:\n");

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5.0 / 9.0 * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr += step;
	}
	printf("Table celsius to fahr\n");
	printf("celsius: fahr:\n");
	celsius = lower;
	while (celsius <= upper) {
		fahr = (celsius * 9.0 / 5.0) + 32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius += step;
	}

	int fahr1;
	printf("loop for\n");
	for (fahr1 = LOWER; fahr1 <= UPPER; fahr1 += STEP) {
		printf("%3d %6.1f\n", fahr1, ((5.0 / 9.0) * (fahr1 - 32)));
	}
	return 0;
}
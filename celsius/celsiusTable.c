#include <stdio.h>

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
	return 0;
}
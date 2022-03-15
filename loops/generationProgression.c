#include <stdio.h>

int main (int arg, char* argv[]) {
	int start, stop, step;
	printf("start, stop, step: \n");
	scanf("%d%d%d", &start, &stop, &step);

	int x = start;
	int sign = (step > 0) ? +1 : -1;
	while (sign * x < sign * stop) {
		printf("x=%d\n", x);
		x += step;
	}

	return 0;
}
#include <stdio.h>
#include <stdbool.h>

int main (int argc, char* argv[])
{
	int number;
	scanf("%d", &number);

	bool any = false;
	bool all = true;

	while(number)
	{
		int digit = number % 10;
		any = any || (digit < 5);
		all = all && (digit < 5);

		number /= 10;
	}

	printf("any: %d \nall: %d \n", any, all);

	return 0;
}
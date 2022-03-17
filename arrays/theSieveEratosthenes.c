#include <stdio.h>
#define N 20

int main(int argc, char* arhv[])
{
	int sieve[N] = {0};

	for (int i = 2; i * i < N; ++i)
	{
		for (int k = i * i; k < N; k += i)
		{
			sieve[k] = 1;
		}
	}
	
	for (int i = 0; i < N; ++i)
	{
		printf("%3d", i);
	}
	printf("\n");
	for (int i = 0; i < N; ++i)
	{
		printf("%3d", sieve[i]);
	}
	printf("\n");

	return 0;
}
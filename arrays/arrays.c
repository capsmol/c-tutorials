#include <stdio.h>

#define N 6

int main(int argc, char* argv[]) 
{
	int arr[N] = {0};

	for (int i = 0; i < N/2; i+= 1)
		{
			arr[2 * i] = i;
			arr[2 * i + 1] = N / 2 + i;
		}


	for (int i = 0; i < N; i+= 1)
	{
		printf(" %d ", arr[i]);
	}
	printf("\n");

	return 0;
}
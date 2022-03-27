#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int N;
	printf("Enter number: \n");
	scanf("%d", &N);
	printf("Size: %lu\n", sizeof(NULL)); // <--- for fun :)
	for (int i = 0; i < 10; i += 1)
	{
		char* A = malloc(N * sizeof(int));
		if (A == NULL)
		{
			printf("OS didn't allocate memory. Exit...\n");
			exit(1);
		}

		for (int i = 0; i < N; i++)
			A[i] = i;
		free(A);
	}

	printf("Successfull!\n");
	return 0;
}
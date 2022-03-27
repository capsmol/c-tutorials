#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int N;
	printf("Enter number\n");
	scanf("%d", &N);

	char* A = malloc(N);
	if (A == NULL)
	{
		printf("OS didn't allocate memory. Exit...\n");
		exit(1);
	}

	for (int i = 0; i < N; i++)
		A[i] = i;

	printf("Successfull!\n");
	return 0;
}
#include <stdio.h>

#define N 10

void print_arr(int arr[])
{
	for (int i = 0; i < N; i += 1)
		printf("%d ", arr[i]);
		printf("\n");
}

int main(int argc, char* argv[])
{
	int arr_1[N] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
	int arr_2[N] = {0};

	//copy
	for (int i = 0; i < N; i += 1)
		arr_2[i] = arr_1[i];


	//reverse
	for (int i = 0; i < N / 2; i += 1)
	{
		int tmp = arr_1[i];
		arr_1[i] = arr_1[N - i - 1];
		arr_1[N - i - 1] = tmp;
	}

	//shift
	int tmp = arr_2[N - 1];
	for (int i = 0; i < N - 1; i += 1)
		arr_2[N - i - 1] = arr_2[N - i - 2];
	arr_2[0] = tmp;



	print_arr(arr_1);
	print_arr(arr_2);
	return 0;
}
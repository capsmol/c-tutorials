#include <stdio.h>
#include <stdbool.h>

#define ALLOCATE_SIZE 1024

int input_array(int arr[], int buff_size)
{
	int top = 0;

	while(true)
	{
		int input_number;
		scanf("%d", &input_number);

		if (input_number == 0 || top == buff_size) break;

		arr[top] = input_number;
		top++;
	}
	return top;
}

void print_array(int arr[], int length)
{
	for (int i = 0; i < length; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void insert_sort(int arr[], int length)
{
	for (int i = 1; i < length; i += 1)
	{
		int k = i;
		while(k > 0 && arr[k - 1] > arr[k])
		{
			int tmp = arr[k - 1];
			arr[k - 1] = arr[k];
			arr[k] = tmp;
			k -= 1;
		}
	}
}

void sorting_counting()
{
	int counters[10] = {0};
	int x;

	while (true)
	{
		scanf("%d", &x);

		if (x == 10) break;
		if (x < 0 || x > 9) continue;
		counters[x] += 1;
	}
	
	for (x = 0; x < 10; x += 1)
		for (int k = 0; k < counters[x]; k += 1)
			printf("%3d ", x);

	printf("\n");
}

int main(int argc, char* argv[])
{
	printf("Enter numbers: \n");
	// int arr[ALLOCATE_SIZE];
	// int length = input_array(arr, ALLOCATE_SIZE);
	// insert_sort(arr, length);
	// print_array(arr, length);

	sorting_counting();

	return 0;
}
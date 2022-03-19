#include <stdio.h>

int get_number_factors(int x, int buff[])
{
	int length = 0;
	int divisor = 2;

	while (x != 1)
	{
		while (x % divisor == 0)
		{
			buff[length] = divisor;
			length += 1;
			x /= divisor;
		}
		divisor += 1;
	}
	return length;
}

int main(int argc, char* argv[])
{
	int x;
	int arr[100];
	printf("Enter number:\n");
	scanf("%d", &x);

	int length = get_number_factors(x, arr);

	for (int i = 0; i < length; i++)
		printf("%d ", arr[i]);

	printf("\n");

	return 0;
}
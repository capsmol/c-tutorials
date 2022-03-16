#include <stdio.h>

int main(int argc, char* irgv[])
{
	int x;
	scanf("%d", &x);
	int max = x;
	while (x != 0)
	{
		max = max > x ? max: x;
		scanf("%d", &x);
	}
	printf("Maximum: %d\n", max);
	return 0;
}
#include <stdio.h>

int main(int argc, char* argv[])
{
	int i = 10;
	int *pi = &i; // <--- poiner / указатель
	int **ppi = &pi;
	printf("i value: %d\n", i);
	printf("i: %p\n", &i);
	printf("PI: %p\n", pi);
	printf("ppi: %p\n", ppi);
	printf("\n");
	
	*pi = 20;
	printf("i new value: %d\n", i);
	**ppi = 30;
	printf("i new new value: %d\n", i);

	return 0;
}
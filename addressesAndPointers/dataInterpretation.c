#include <stdio.h>

int main(int argc, char* argv[])
{
	char c = 'W';
	int i = 450;
	double d = -1;
	void* p;

	p = &c;
	printf("%c\n", *(char*)p);

	p = &i;
	printf("%d\n", *(int*)p);
	p = &d;
	printf("%f\n", *(double*)p);


	return 0;
}
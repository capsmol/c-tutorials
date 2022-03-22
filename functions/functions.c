#include <stdio.h>

void A();
void B();
void C();

int main(int argc, char* argv[])
{
	printf("main() called \n");
	A();
	printf("main() return \n");
}

void A()
{
	printf("A() called \n");
	B();
	printf("A() return \n");
}

void B()
{
	printf("B() called \n");
	C();
	printf("B() return \n");
}

void C()
{
	printf("C() called \n");
	printf("C() return \n");
}
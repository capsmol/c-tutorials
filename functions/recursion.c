#include <stdio.h>

void matryoshka(int count);
int factorial(int n);
int gcd(int a, int b);
double fast_power(double a, int n);
int fib(int n);

int main(int argc, char* argv[])
{
	// matryoshka(5);
	int n, m;
	scanf("%d%d", &n, &m);
	printf("factorial %d = %d\n", n, factorial(n));
	printf("gcd(%d,%d) = %d\n", n, m, gcd(n, m));
	printf("fast_power(%d,%d) = %f\n", n, m, fast_power(n, m));
	printf("fib %d = %d\n", n, fib(n));
	return 0;
}

void matryoshka(int count)
{
	if (count == 1)
		printf("last matryoshka!!! %d\n", count);
	else
	{
		printf("matryoshka top side %d\n", count);
		matryoshka(count - 1);
		printf("matryoshka bottom side %d\n", count);
	}
}

int factorial(int n)
{
	if (0 == n)
		return 1;
	return factorial(n - 1) * n;
}

int gcd(int a, int b)
{
	if (0 == b)
		return a;

	return gcd(b, a % b);
}

double fast_power(double a, int n)
{
	if (0 == n) return 1;
	if (n % 2 == 1)
		return a * fast_power(a, n - 1);
	else
		return fast_power(a * a, n / 2);
}

int fib(int n)
{
	if (n <= 1 ) return n;
	return fib(n - 1) + fib(n - 2);
}
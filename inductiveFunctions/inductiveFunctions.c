// Индуктивные функции
// f - индуктивная на пространсве последовательности X, если найдется функция перевычесления F(f, x) 

#include <stdio.h>

int main(int argc, char* argv[])
{
	int x;
	scanf("%d", &x);

	int n = 0;
	int s = 0;
	int p = 1;

	while (x)
	{
		int digit = x % 10;
		// Подсчет (индуктивная функция)
		n += 1;
		s += digit;
		p *= digit;

		x /= 10;
	}
	printf("Result: %d, %d, %d\n", n, s, p);

	return 0;
}
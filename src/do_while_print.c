void reshdo3(int n, int k)
{
	float a;
#include <math.h>
#include <stdio.h>

int k1;
k1 = k;
int i = 0;
do
{
	a = func(i);
	if ((i + 1) == k)
	{
		k += k1;
		++i;
		continue;
	}
	else
	{
		printf("Иттерация: %d ", i + 1);
		printf(" Результат: %f\n", a);
	}
	++i;
} while (i <= (n - 2));


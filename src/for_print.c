#include <math.h>
#include <stdio.h>

void print(int n, int k)
{
	float a;
	int k1;
	k1 = k;
	for (int i = 0; i <= (n - 1); ++i)
	{
		a = a(i);
		if ((i + 1) == k)
		{
			k += k1;
			continue;
		}
		else
		{
			printf("Иттерация: %d ", i + 1);
			printf(" Результат: %f\n", a);
		}
	}
}

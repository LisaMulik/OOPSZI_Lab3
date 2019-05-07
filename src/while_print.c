#include <math.h>
#include <stdio.h>

void print(int n, int k)
{
	double a;
	int k1;
	k1 = k;
	int i = 0;
	while (i <= (n - 1))
	{
		a = a(i);
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
	}
}


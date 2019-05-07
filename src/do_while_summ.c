#include <math.h>
#include <stdio.h>

double summ(int n)
{
	int i = 0;
	double res = 0;

	do
	{
		if(i >= n-1) break;
		res += a(i);
		i++;
	}
	while(i < n-1);

	return res;
}

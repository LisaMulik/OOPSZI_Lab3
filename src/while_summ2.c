#include <math.h>
#include <stdio.h>

double summ2(double eps)
{
	int i = 0;
	double res = 0;

	while( !(abs(a(i)) <= eps) )
	{
		res += a(i);
		++i;
	}

	return res;
}


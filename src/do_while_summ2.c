#include <math.h>
#include <stdio.h>

double summ2(double eps)
{
	int i = 0;
	double res = 0;

	do
	{
		if(abs(a(i)) <= eps) break;
		res += a(i);
		i++;
	}
	while( !(abs(a(i)) <= eps) );

	return res;
}

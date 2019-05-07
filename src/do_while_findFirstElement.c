#include <math.h>

int findFirstElement(double eps)
	{
		double i = 0;

		do
		{
			if(abs(a(i)) <= eps) break;
			++i;
		}
		while(abs(a(i)) >= eps);

		return i;
}

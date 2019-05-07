#include <math.h>

int findFirstNegativeElement(double eps)
{
	int i = 0;
		do
		{
			if( abs(a(i)) <= eps && a(i) < 0) break;
			++i;
		}
		while(true);

	return i;
}

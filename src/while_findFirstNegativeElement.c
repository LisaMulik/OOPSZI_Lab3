#include <math.h>
#include <stdio.h>

int findFirstNegativeElement(double eps)
{
	int i = 0;

	while(true)
	{
		if( abs(a(i)) <= eps && a(i) < 0) break;
		++i;
	}

	return i;
}


#include <stdio.h>
#include "uniform.h"

void main()
{
	double a, b, x;
	int i, j;
	long int s;
	
	a = 1.0;
	b = 2.0;
	s = 13579;
	
	for (i = 0; i < 200; i++)
	{
		for (j = 0; j < 5; j++)
		{
			x = uniform(a, b, &s);
			printf("%13.7f", x);
		}
		printf("\n");
	}
}

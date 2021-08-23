#include <stdio.h>
#include "cal.h"

int main(void)
{
	double a = 2.1;
	double b = 2.1;

	a = 4.2 * 4.2;
	plus(a, b);
	minus(a, b);
	mul(a, b);
	// div(a, b);

	printf("%f + %f = %f\n", a, b, plus(a, b));
	printf("%f - %f = %f\n", a, b, minus(a, b));
	printf("%f * %f = %f\n", a, b, plus(a, b));
}

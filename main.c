#include <stdio.h>
#include "cal.h"

int main(void)
{
	// make conflict start
	double a = 4.2;
	double b = 4.2;
	double rst;
	char op;

	rst = plus(a, b);
	op = '+';
	printf("%f %c %f = %f\n", a, op, b, rst);
	rst = minus(a, b);
	op = '-';
	printf("%f %c %f = %f\n", a, op, b, rst);
	rst = mul(a, b);
	op = '*';
	printf("%f %c %f = %f\n", a, op, b, rst);
	// make conflict end
}

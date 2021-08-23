#include <stdio.h>

double plus (double a, double b);
double minus (double a, double b);

int main(void)
{
	double a = 1.1;
	double b = 3.4;

	plus(a, b);
	minus(a, b);
	// mul(a, b);
	// div(a, b);

	printf("%f\n", plus(a, b));
}

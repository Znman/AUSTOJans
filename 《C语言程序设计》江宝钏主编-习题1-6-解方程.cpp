#include <stdio.h>
#include <math.h>

int main() {
	double x, a, b;
	scanf("%lf%lf", &a, &b);
	x = ((float) (5 - 3 * b )) / (2.0 * a);
	printf("%.1f", x);
}
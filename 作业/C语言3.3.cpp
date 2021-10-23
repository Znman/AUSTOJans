#include <stdio.h>

int main() {
	double x, y, res;
	int a;
	scanf("%lf %d %lf", &x, &a, &y);
	res = x + a % 3 * (int)(x + y) % 2 / 4 ;
	printf("%.6lf", res);
	return 0;
}
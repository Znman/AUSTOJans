#include <stdio.h>

int main () {
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a > b && a > c) {
		if (c > b) {
			printf("%.2lf %.2lf %.2lf", b, c, a);
			return 0;
		}
		printf("%.2lf %.2lf %.2lf", c, b, a);
		return 0;
	}
	if (b > a && b > c) {
		if (c > a) {
			printf("%.2lf %.2lf %.2lf", a, c, b);
			return 0;
		}
		printf("%.2lf %.2lf %.2lf", c, a, b);
		return 0;
	}
	if (c > a && c > b) {
		if (b > a) {
			printf("%.2lf %.2lf %.2lf", a, b, c);
			return 0;
		}
		printf("%.2lf %.2lf %.2lf", b, a, c);
		return 0;
	}
	return 0;
}
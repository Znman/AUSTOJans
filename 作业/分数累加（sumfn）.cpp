#include <stdio.h>

int main() {
	double a, b, sum = 0, tmp;
	int n;
	a = 2.0;
	b = 1.0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		sum += a / b;
		tmp = a;
		a = a + b;
		b = tmp;
	}
	printf("%.10lf", sum);
	return 0;
}
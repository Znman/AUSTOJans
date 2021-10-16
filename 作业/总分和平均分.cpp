#include <stdio.h>

int main() {
	float a, b, c, avg;
	int sum;
	scanf("%f %f %f", &a, &b, &c);
	avg = (a + b + c) / 3.0;
	sum = a + b + c;
	printf("%d %.2f ", sum, avg);
}
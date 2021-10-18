#include <stdio.h>
#include <math.h>

int main() {
	int money, year;
	float rate, sum;
	scanf("%d%d%f", &money, &year, &rate);
	sum = (float)money * pow((1.0 + rate), year);
	printf("%.1f", sum);
	return 0;
}
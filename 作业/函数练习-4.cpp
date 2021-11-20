#include <stdio.h>
#include <math.h>

double disc(double x1, double y1, double x2, double y2) {
	double dis = 0;
	dis = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	return dis;
}

int main() {
	double n, x1, x2, y1, y2;
	double d, sum = 0;
	scanf("%lf", &n);
	scanf("%lf %lf", &x1, &y1);
	for (int i = 0; i < n - 1 ; i++) {
		scanf("%lf %lf", &x2, &y2);
		sum += disc(x1, y1, x2, y2);
		x1 = x2;
		y1 = y2;
	}
	printf("%.2lf", sum);
	return 0;
}
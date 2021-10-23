#include <stdio.h>

int main () {
	int s;
	double p, w, d, f;
	scanf("%lf %lf %d", &p, &w, &s);
	if (s < 250) {
		f = p * w * s;
		printf("%.2lf", f);
		return 0;
	} else if (s >= 250 && s < 500) {
		d = 0.98;
	} else if (s >= 500 && s < 1000) {
		d = 0.95;
	} else if (s >= 1000 && s < 2000) {
		d = 0.92;
	} else if (s >= 2000 && s < 3000) {
		d = 0.9;
	} else if (s >= 3000) {
		d = 0.85;
	}
	f = p * w * (double)s * d;
	printf("%.4lf\n", f);
	return 0;
}

#include <stdio.h>

int main () {
	int a, b, c, d, e, max = 0, min = 0;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	max = a;
	min = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	if (d > max)
		max = d;
	if (e > max)
		max = e;
	if (min > b)
		min = b;
	if (min > c)
		min = c;
	if (min > d)
		min = d;
	if (min > e)
		min = e;
	printf("Max=%d\nMin=%d", max, min);
	return 0;
}
#include <stdio.h>

int main() {
	int a, b, c, d;
	scanf("%d %d %d", &a, &b, &c);
	d = a % 3;
	a = a - d;
	a = a / 3;
	b += a;
	c += a;
	d = b % 3;
	b = b - d;
	b = b / 3;
	a += b;
	c += b;
	d = c % 3;
	c = c - d;
	c = c / 3;
	a += c;
	b += c;
	printf("%d %d %d", a, b, c);
}
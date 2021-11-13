#include "stdio.h"

int main() {
	int a, b, x, y, z, j, flag = 0;
	scanf("%d %d", &a, &b);
	if (a < b) {
		b = a + b;
		a = b - a;
		b = b - a;
	}
	for (j = b; j <= a; j++) {
		x = j % 10;
		y = j / 10 % 10;
		z = j / 100;
		if (x * x * x + y * y * y + z * z * z == j) {
			printf("%d\n", j);
			flag++;
		}
	}
	if (flag == 0)
		printf("NO");
	return 0;
}


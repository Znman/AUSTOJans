#include "stdio.h"

int main() {
	int a, x, y, z;
	scanf("%d", &a);
	for (x = 1; x <= a; x++) {
		for (y = 1; y <= a - x; y++) {
			printf(" ");
		}
		for (z = 1; z <= 2 * x - 1; z++)
			printf("*");
		printf("\n");
	}
}


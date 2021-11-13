#include <stdio.h>

int main() {
	int a, b;
	for (int i = 0; i < 33; i++) {
		for (a = 0; a < 50; a++) {
			for (b = 0; b < 100; b++) {
				if (a + b + i == 90 && i * 15 + a * 10 + b * 5 == 500)
					printf("%d %d %d\n", i, a, b);
			}
		}
	}
	return 0;
}
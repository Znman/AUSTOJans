
#include <stdio.h>

int main() {
	int b, t;
	scanf("%d", &b);
	int a[b];
	for (int i = 0; i < b; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < b - 1; i++) {
		for (int j = 0; j < b - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	for (int e = 0; e < b - 1; e++)
		printf("%d ", a[e]);
	printf("%d", a[b - 1]);
	return 0;
}


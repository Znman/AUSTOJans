#include <stdio.h>

int reverse() {
	int k;
	scanf("%d", &k);
	int tmp = 0;
	while (k != 0) {
		tmp = tmp * 10 + k % 10;
		k /= 10;
	}
	printf("%d\n", tmp);
	return 0;
}

int main() {
	int a, n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		reverse();
	}
	return 0;
}

#include <stdio.h>

int find_max(int a, int b, int c) {
	int max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	printf("%d\n", max);
	return 0;
}

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	find_max(a, b, c);
	while (scanf("%d %d %d", &a, &b, &c) != EOF) {
		find_max(a, b, c);
	}
	return 0;
}
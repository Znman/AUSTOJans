#include <stdio.h>

int fab(int n) {
	if (n == 1 || n == 2)
		return 1;
	return fab(n - 1) + fab(n - 2);
}

int main() {
	int b, t, flag = 0;
	scanf("%d", &b);
	for (int i = 1; i <= b; i++) {
		printf("%12d", fab(i));
		flag++;
		if (flag == 5) {
			printf("\n");
			flag = 0;
		}
	}
	return 0;
}


#include <stdio.h>

int main() {
	int a[3][4] = {0}, max = 0, rows, cols;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &a[i][j]);
			if (a[i][j] > max) {
				max = a[i][j];
				rows = i;
				cols = j;
			}
		}
	}
	printf("%d %d %d", max, rows, cols);
	return 0;
}
#include <stdio.h>

int main() {
	int i = 0, j;
	do {
		scanf("%d", &j);
		i++;
	} while (j != 0);
	printf("%d", i);
}
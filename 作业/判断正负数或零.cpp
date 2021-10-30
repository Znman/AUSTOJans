#include <stdio.h>

int main () {
	int a;
	scanf("%d", &a);
	if (a < 0) {
		printf("%d<0", a);
		return 0;
	} else if (a == 0) {
		printf("0=0");
		return 0;
	}
	printf("%d>0", a);
	return 0;
}
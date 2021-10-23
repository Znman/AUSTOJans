#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	if (a % 4 == 0 && a % 100 != 0)
		printf("leap year");
	else
		printf("not leap year")
		return 0;
}
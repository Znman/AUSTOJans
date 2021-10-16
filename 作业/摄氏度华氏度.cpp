#include <stdio.h>

int main() {
	float f;
	int c;
	scanf( "%d", &c);
	f = c * 9.0 / 5.0 + 32.0;
	printf( "%.2f", f);
	return 0;
}
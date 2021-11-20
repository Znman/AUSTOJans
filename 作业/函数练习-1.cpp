#include <stdio.h>

int isPrime(int x) {
	int ret = 1;
	int i;
	if (x == 1)
		ret = 0;
	for (i = 2; i < x; i++) {
		if (x % i == 0) {
			ret = 0;
			break;
		}
	}
	return ret;
}

int main() {
	int head, tail;
	scanf("%d %d", &head, &tail);
	for (head; head <= tail; head++) {
		if (isPrime(head)) {
			printf("%d ", head);
		}
	}
	return 0;
}
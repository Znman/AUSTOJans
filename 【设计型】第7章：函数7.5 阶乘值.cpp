#include <iostream>
#include <math.h>
using namespace std;

int fun(int n) {
	if (n == 1 || n == 0)
		return 1;
	return n * fun(n - 1);
}

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << i << "!=" << fun(i) << endl;
	}
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	int n;
	char a[10000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i <= n; i += 2) {
		cout << a[i];
	}
}
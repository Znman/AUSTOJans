#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	for (int i = 100; i <= 999; i++) {
		if (i * 3 <= 1000) {
			if (i * 2 <= 1000) {
				cout << i << " " << i * 2 << " " << i * 3 << endl;
			}
		}
	}
	return 0;
}
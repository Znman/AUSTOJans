#include <iostream>
using namespace std;

int main() {
	int group, a, b;
	cin >> group;
	for (int i = 1; i <= group; i++) {
		cin >> a >> b;
		cout << a + b << endl;
	}
	return 0;
}
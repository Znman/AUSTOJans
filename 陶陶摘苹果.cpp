#include <iostream>
using namespace std;

int main() {
	int apple[10], l, tot = 0;
	for (int i = 0; i < 10; i++) {
		cin >> apple[i];
	}
	cin >> l;
	l += 30;
	for (int i = 0; i < 10; i++) {
		if (l >= apple[i]) {
			tot++;
		}
	}
	cout << tot;
	return 0;
}
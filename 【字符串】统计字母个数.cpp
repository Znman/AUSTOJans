#include <iostream>
using namespace std;

int alp[26] {0};

int what_alp(char i) {
	if (i < 91 && i > 64) {
		alp[i - 65]++;
		return 0;
	} else if (i < 123 && i > 96) {
		alp[i - 97]++;
		return 0;
	}
}

int main() {
	char n;
	while (cin >> n) {
		cin >> n;
		if (n == '@') {
			break;
		}
		what_alp(n);
	}
	for (int j = 0; j <= 25; j++) {
		cout << (char)(j + 97) << ' ' << alp[j] << endl;
	}
	return 0;
}
#include <iostream>
using namespace std;
int win1 = 0, win2 = 0;
int C1 = 0, C2 = 0, B1 = 0, B2 = 0, J1 = 0, J2 = 0;

int if_win(char a, char b) {
	if (a == b) {
		return 0;

	} else if (a == 'C' && b == 'J') {
		win1++;
		C1++;
		return 0;

	} else if (a == 'J' && b == 'B') {
		win1++;
		J1++;
		return 0;

	} else if (a == 'B' && b == 'C') {
		win1++;
		B1++;
		return 0;
	} else
		win2++;
	if (b == 'C') {
		C2++;
	} else if (b == 'B') {
		B2++;
	} else
		J2++;
	return 0;
}

int all_eq(int c, int b, int j) {
	if (c > b && c > j) {
		cout << "C";
		return 0;
	} else if (b > c && b > j) {
		cout << "B";
		return 0;
	} else if (b == c || b == j) {
		cout << "B";
		return 0;
	} else if (c == j) {
		cout << "C";
		return 0;
	}
	cout << "J";
	return 0;
}

int main() {
	long int rounds;
	char a, b;
	cin >> rounds;
	for (int i = 1; i <= rounds; i++) {
		cin >> a >> b;
		if_win(a, b);
	}
	cout << win1 << ' ' << rounds - win1 - win2 << ' ' << win2 << endl;
	cout << win2 << ' ' << rounds - win1 - win2 << ' ' << win1 << endl;
	all_eq(C1, B1, J1);
	cout << ' ';
	all_eq(C2, B2, J2);
	return 0;
}
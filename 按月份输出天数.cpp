#include <iostream>
using namespace std;

int main() {
	int year, m, day;
	cin >> year >> m;
	if (m == 2) {
		if ( (year % 4 == 0) && ( year % 100 != 0) || (year % 400 == 0) ) {
			cout << 29;
			return 0;
		}
		cout << 28;
		return 0;
	}
	switch (m) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			day = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			day = 30;
			break;
	}
	cout << day;
	return 0;
}
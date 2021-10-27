#include <iostream>
#include <math.h>
#include <iomanip>
#define PI 3.1415926
using namespace std;

int main() {
	int n;
	double x;
	cin >> n;
	x = n * PI / 180.0;
	cout << fixed << setprecision(3) << sin(x) << " " << cos(x);
}
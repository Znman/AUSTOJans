#include <cstdio>
using namespace std;

int main() {
	float n;
	float sumz = 0, sumf = 0;
	int gz = 0, gf = 0;
	do {
		scanf("%f", &n);
		if (n > 0) {
			gz++;
			sumz += n;
		}
		if (n < 0) {
			gf++;
			sumf += n;
		}
		if (n == 0)
			break;

	} while (n != 0);

	printf("%d %.2f\n", gz, sumz);

	printf("%d %.2f\n", gf, sumf);

	return 0;

}

#include <cstdio>
#include <cmath>
int main(int argc, char* argv[]) {
	int n = 0;
	int m = 0;
	scanf_s("%d", &n);
	scanf_s("%d", &m);
	int c = 0;
	if (n > m) {
		n = n + m;
		m = n - m;
		n = n - m;
	}
	if (n == 1) {
		c = 4 * m;
	}
	else if (n % 2 == 0 && m % 2 == 0) {
		c = 2 * ((n + 1) * m + n);
	}
	else {
		c = (m + 1) * n + (n + 1) * m;
		c += (2 * (m - 1) + 2 * (n - 1)) / 2;
		if (n * m % 2 == 0) {
			c += 2;
		}
	}
	printf("%d", c);
	return EXIT_SUCCESS;
}

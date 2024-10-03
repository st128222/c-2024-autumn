#include <cstdio>
int main(int argc, char* argv[]) {
	int  n = 0;
	int  m = 0;
	int  d = 0;
	int  c = 0;
	scanf_s("%d", &n);
	scanf_s("%d", &m);
	d = n;
	c = m;
	while (d != 0 && c != 0) {
		if (d > c) {
			d %= c;
		}
		else {
			c %= d;
		}
	}
	m = c + d;
	printf("%d", n / m);
	return 0;
}
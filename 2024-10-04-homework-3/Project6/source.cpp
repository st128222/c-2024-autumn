#include <cstdio>
int main(int argc, char* argv[]) {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int f = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	c = a;
	d = b;
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	f = c * d / a;
	printf("%d", f);
	return 0;
}
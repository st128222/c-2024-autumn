#include <cstdio>
#include <cmath>
int main(int argc, char* argv[]) {
	int b = 0;
	int n = 0;
	int a = 0;
	scanf_s("%d", &n);
	if (n % 5 == 0) {
		b = n / 5;
		a = 0;
		printf("%d\n", b);
		printf("%d", a);
	}
	else if (n % 5 == 1 || n % 5 == 4) {
		b = n / 5 - 1;
		a = (n - (b * 5)) / 3;
		printf("%d\n", b);
		printf("%d", a);
	}
	else if (n % 5 == 2) {
		b = n / 5 - 2;
		a = (n - (b * 5)) / 3;
		printf("%d\n", b);
		printf("%d", a);
	}
	else if (n % 5 == 3) {
		a = 1;
		b = n / 5;
		printf("%d\n", b);
		printf("%d", a);
	}
	return EXIT_SUCCESS;
}
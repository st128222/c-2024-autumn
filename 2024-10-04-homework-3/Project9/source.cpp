#include <cstdio>
#include <cmath>
int main(int argc, char* argv[]) {
	long a = 0;
	long b = 0;
	long c = 0;
	long d = 0;
	scanf_s("%ld", &a);
	scanf_s("%ld", &b);
	scanf_s("%ld", &c);
	scanf_s("%ld", &d);
	for (int i = -100; i <= 100; ++i) {
		if (a * pow(i, 3) + b * pow(i, 2) + c * i + d == 0)
			printf("%d\n", i);
	}
	return 0;
}
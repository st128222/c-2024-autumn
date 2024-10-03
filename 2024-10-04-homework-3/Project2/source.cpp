#include <cstdio>
int main(int argc, char* argv[]) {
	int k = 0;
	scanf_s("%d", &k);
	int n = 0;
	int m = 0;
	int d = 0;
	for (int i = 1; i <= k; ++i) {
		scanf_s("%d", &n);
		scanf_s("%d", &m);
		d = 19 * m + (n + 239) * (n + 366) / 2;
		printf("%d\n", d);
	}
	return 0;
}

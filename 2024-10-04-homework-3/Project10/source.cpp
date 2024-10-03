#include <cstdio>
int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int a = 0;
	int b = 0;
	int bm = 0;
	for (int i = 1; i <= n; ++i) {
		scanf_s("%d", &a);
		if (a > 0) {
			b += 1;
		}
		else {
			b = 0;
		}
		if (b > bm) {
			bm = b;
		}
	}
	printf("%d", bm);
	return 0;
}

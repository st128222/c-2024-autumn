#include <cstdio>
int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int a[1000] = { 0 };
	for (int p = 0; p < n; ++p) {
		scanf_s("%d", &a[p]);
	}
	int m = 0;
	int i = 0;
	int j = 0;
	scanf_s("%d", &m);
	for (int k = 0; k < m; ++k) {
		scanf_s("%d", &i);
		scanf_s("%d", &j);
		for (int p = i - 1; p <= j - 1; ++p) {
			printf("%d\n", a[p]);
		}
	}
	return 0;
}
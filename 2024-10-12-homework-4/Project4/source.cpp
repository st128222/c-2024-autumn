#include <cstdio>
int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int k = 0;
	int a[1000] = { 0 };
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &a[i]);
		if (a[1] > a[n - 2]) {
			k = a[n - 1] + a[0] + a[1];
		}
		else {
			k = a[n - 2] + a[n - 1] + a[0];
		}
	}
	for (int i = 1; i < n - 1; ++i) {
		if (a[i] + a[i - 1] + a[i + 1] > k) {
			k = a[i] + a[i - 1] + a[i + 1];
		}
	}
	printf("%d", k);
	return 0;
}
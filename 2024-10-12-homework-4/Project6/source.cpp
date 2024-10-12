#include <cstdio>
#include <cmath>
int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int v[100] = { 0 };
	int p = 0;
	int max_num = 1;
	int max_p = 0;
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &v[i]);
	}
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &p);
		if (v[i] * p > max_p) {
			max_p = p * v[i];
			max_num = i + 1;
		}
	}
	printf("%d", max_num);
	return 0;
}
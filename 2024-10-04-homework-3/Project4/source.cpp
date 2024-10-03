#include <cstdio>
int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int v = 0;
	int s = 0;
	int vm = -1;
	int d = -1;
	for (int i = 1; i <= n; ++i) {
		scanf_s("%d", &v);
		scanf_s("%d", &s);
		if (v > vm && s == 1) {
			vm = v;
			d = i;
		}
	}
	printf("%d", d);
	return 0;
}


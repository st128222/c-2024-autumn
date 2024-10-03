#include <cstdio>
int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int k = 0;
	int c = 0;
	int m = 0;
	for (int i = 1; i <= n; ++i) {
		scanf_s("%d", &m);
		if (m == 0)
			k += 1;
		else
			c += 1;
	}
	if (k > c)
		printf("%d", c);
	else
		printf("%d", k);
	return 0;
}

#include <cstdio>
int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int k = 0;
	int m = 0;
	int c = 0;
	for (int i = 1; i <= n; ++i) {
		scanf_s("%d", &m);
		if (m <= 437) {
			c = i;
			break;
		}
		else
			k += 1;
	}
	if (k == n)
		printf("No crash");
	else
		printf("Crash %d", c);
	return 0;
}

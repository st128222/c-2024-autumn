#include <cstdio>
int main(int argc, char* argv[]) {
	int f0 = 0;
	int f = 1;
	int c = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int m = 0;
	scanf_s("%d", &i);
	scanf_s("%d", &j);
	while (i != 0 && j != 0)
		if (i > j) {
			i %= j;
		}
		else {
			j %= i;
		}
	c = i + j;
	while (k < c) {
		f0 = f;
		f = m;
		m = (f0 + f) % 1000000000;
		k++;
	}
	printf("%d", m);

	return 0;
}
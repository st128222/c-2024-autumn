#include <cstdio>
#include <cmath>
int main(int argc, char* argv[]) {
	int n = 0;
	scanf_s("%d", &n);
	int a[1001] = { 0 };
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", &a[i]);
	}
	int k = 0;
	int x = 0;
	k = a[0];
	scanf_s("%d", &x);
	for (int i = 0; i < n; ++i)
		if (abs(a[i] - x) < abs(k - x) || abs(a[i] - x) == abs(k - x) && a[i] < k)
		{
			k = a[i];
		}
	printf("%d", k);
	return 0;
}
#include <iostream>
int a[10 * 10 * 10 * 10 * 10] = { 0 };
int main(int argc, char* argv[]) {
	int n = 0;
	int m = 0;
	int y = 0;
	int x = 0;
	std::cin >> n;
	std::cin >> m;
	for (int j = 1; j <= n; ++j) {
		scanf_s("%d", &x);
		a[x] = 1;
	}
	for (int j = 1; j <= m; ++j) {
		scanf_s("%d", &y);
		if (a[y] == 1)
			a[y] = 2;
	}
	for (int i = 0; i < pow(10, 5) + 1; ++i) {
		if (a[i] == 2)
			std::cout << i << ' ';
	}
	return 0;
}
// corrected solution to ex 6 (without using set) After 1.5 hours I succeded....
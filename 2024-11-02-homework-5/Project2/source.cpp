#include <iostream>
int main(int argc, char* argv[]) {
	int n = 0;
	std::cin >> n;
	int* a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", a + i);
	}
	int k = 0;
	std::cin >> k;
	k %= n;
	for (int i = n; i < 2 * n; ++i) {
		std::cout << *(a + (i - k) % n) << ' ';
	}
	free(a);
	return 0;
}
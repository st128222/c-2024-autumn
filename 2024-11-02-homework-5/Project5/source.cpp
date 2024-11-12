#include <iostream>
#include <algorithm>
int main(int argc, char* argv[]) {
	int n = 0;
	std::cin >> n;
	int* a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", a + i);
	}
	int max = 0;
	int sum = 0;
	for (int i = n - 1; i >= 0; --i) {
		max = std::max(max, *(a + i));
		sum += max;
	}
	printf("%d", sum);
	free(a);
	return 0;
}
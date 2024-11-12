#include <iostream>
int main(int argc, char* argv[]) {
	int n = 0;
	std::cin >> n;
	int* a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", a + i);
	}
	int k = 0;
	int p = 0;
	for (int i = 0; i < n; ++i) {
		if (*(a + i) % 2 == 0) {
			k += 1;
		}
		else {
			p += 1;
		}
	}
	for (int i = 0; i < n; ++i) {
		if (*(a + i) % 2 != 0) {
			std::cout << *(a + i) << ' ';
		}
	}
	for (int i = 0; i < n; ++i) {
		if (*(a + i) % 2 == 0) {
			std::cout << *(a + i) << ' ';
		}
	}
	if (k >= p) {
		printf("YES");
	}
	else {
		printf("NO");
	}
	free (a);
	return 0;
}
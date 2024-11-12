#include <iostream>
int main(int argc, char* argv[]) {
	int n = 0;
	std::cin >> n;
	int* a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; ++i) {
		scanf_s("%d", a + i);
	}
	int max = 0;
	int min = 0;
	for (int i = 0; i < n; ++i) {
		if (*(a + i) > *(a + max)) {
			max = i;
		}
	}
	for (int i = 0; i < n; ++i) {
		if (*(a + i) < *(a + min)) {
			min = i;
		}
	}
	int s = 0;
	int p = 1;
	for (int i = 0; i < n; ++i) {
		if (*(a + i) > 0) {
			s += *(a + i);
		}
	}
	if (min < max) {
		for (int i = min + 1; i < max; ++i) {
			p = p * *(a + i);
		}
	}
	else if (max < min) {
		for (int i = max + 1; i < min; ++i) {
			p = p * *(a + i);
		}
	}
	printf("%d\n", s);
	printf("%d", p);
	free(a);
	return 0;
}

#include <cstdio>
#include <cmath>
int main(int argc, char* argv[]) {
	int k = 0;
	int m = 0;
	int n = 0;
	scanf_s("%d", &k);
	scanf_s("%d", &m);
	scanf_s("%d", &n);
    int p = 0;
    if (n == 0) {
        p = 0;
        }
    else if (n <= k) {
        p = 2;
        }
    else {
        p = (2 * n + k - 1) / k;
        }
    printf("%d", m * p);
	return EXIT_SUCCESS;
}
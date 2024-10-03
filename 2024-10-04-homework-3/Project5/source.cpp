#include <cstdio>
int main(int argc, char* argv[]) {
	int n = 0;
	int p = 0;
	int k = 0;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; ++i) 
		for (int j = 1; j <= n; ++j) {
			scanf_s("%d", &p);
			if (p == 1) 
				k += 1;	
	}
	printf("%d", k/2);
	return 0;
}
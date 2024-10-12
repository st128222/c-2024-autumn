#include<cstdio>
int main(int argc, char* argv[]) {
	int x[1001] = { 0 };
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int y = 0;
	scanf_s("%d", &n);
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	scanf_s("%d", &d);
	for (int i = 1; i <= n; ++i)
		x[i] = i;

	for (int i = a; i <= (a + b) / 2; ++i)
	{
		y = x[i];
		x[i] = x[b + a - i];
		x[b + a - i] = y;
	}

	for (int i = c; i <= (c + d) / 2; ++i)
	{
		y = x[i];
		x[i] = x[d + c - i];
		x[d + c - i] = y;
	}
	for (int i = 1; i <= n; ++i)
		printf("%d\n", x[i]);
	return 0;
}
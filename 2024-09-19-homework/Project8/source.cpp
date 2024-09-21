#include <iostream>
int main(int argc, char* argv[]) {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf_s("%d", &a);
	b = a % 10;
	c = (a / 10) % 10;
	d = a / 100;
	a = b + c + d;
	printf_s("%d", a);
	EXIT_SUCCESS;
}
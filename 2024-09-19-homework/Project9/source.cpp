#include <iostream>
int main(int argc, char* argv[]) {
	int H = 0;
    int a = 0;
    int b = 0;
    scanf_s("%d", &H);
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    int e = 1 + ((H - a) > 0) * ((H - a + (a - b - 1)) / (a - b));
    printf("%d", e);
	EXIT_SUCCESS;
}
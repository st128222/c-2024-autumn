#include <cstdio>
#include <cmath>
int main(int argc, char* argv[]) {
	int a1 = 0;
	int b1 = 0;
	int c1 = 0;
	int a2 = 0;
	int b2 = 0;
	int c2 = 0;
	scanf_s("%d", &a1);
	scanf_s("%d", &b1);
	scanf_s("%d", &c1);
	scanf_s("%d", &a2);
	scanf_s("%d", &b2);
	scanf_s("%d", &c2);
	int s1 = 0;
	int s2 = 0;
	int s3 = 0;
	int k1 = 0;
	int k2 = 0;
	int k3 = 0;
	if (a1 >= b1 && b1 >= c1) {
		s1 = a1;
		s2 = b1;
		s3 = c1;
	}
	else if (a1 >= c1 && c1 >= b1) {
		s1 = a1;
		s2 = c1;
		s3 = b1;
	}
	else if (b1 >= a1 && a1 >= c1) {
		s1 = b1;
		s2 = a1;
		s3 = c1;
	}
	else if (b1 >= c1 && c1 >= a1) {
		s1 = b1;
		s2 = c1;
		s3 = a1;
	}
	else if (c1 >= b1 && b1 >= a1) {
		s1 = c1;
		s2 = b1;
		s3 = a1;
	}
	else if (c1 >= a1 && a1 >= b1) {
		s1 = c1;
		s2 = a1;
		s3 = b1;
	}
	if (a2 >= b2 && b2 >= c2) {
		k1 = a2;
		k2 = b2;
		k3 = c2;
	}
	else if (a2 >= c2 && c2 >= b2) {
		k1 = a2;
		k2 = c2;
		k3 = b2;
	}
	else if (b2 >= a2 && a2 >= c2) {
		k1 = b2;
		k2 = a2;
		k3 = c2;
	}
	else if (b2 >= c2 && c2 >= a2) {
		k1 = b2;
		k2 = c2;
		k3 = a2;
	}
	else if (c2 >= b2 && b2 >= a2) {
		k1 = c2;
		k2 = b2;
		k3 = a2;
	}
	else if (c2 >= a2 && a2 >= b2) {
		k1 = c2;
		k2 = a2;
		k3 = b2;
	}
	if ((s1 == k1) && (s2 == k2) && (s3 == k3)) {
		printf("Boxes are equal");
	}
	else if ((s1 >= k1) && (s2 >= k2) && (s3 >= k3)) {
		printf("The first box is larger than the second one");
	}
	else if ((k1 >= s1) && (k2 >= s2) && (k3 >= s3)) {
		printf("The first box is smaller than the second one");
	}
	else {
		printf("Boxes are incomparable");
	}
	return EXIT_SUCCESS;
}
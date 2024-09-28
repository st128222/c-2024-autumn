#include <cstdio>
#include <cmath>

int main(int argc, char* argv[]) {
    long long a = 0;
    long long b = 0;
    long long c = 0;
    scanf_s("%lld", &a);
    scanf_s("%lld", &b);
    scanf_s("%lld", &c);
    int k = 0;
    float x1 = 0;
    float x2 = 0;
    long long d = 0;
    d = (b * b) - (4 * a * c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                k = -1;
                printf("%d\n", k);
            }
            else {
                k = 0;
                printf("%d\n", k);
            }
        }
        else {
            k = 1;
            x1 = -c / (double)b;
            printf("%d\n", k);
            printf("%f\n", x1);
        }
    }
    else if (a != 0 && d > 0) {
        k = 2;
        x1 = (-b + sqrt(d)) / (2 * (double)a);
        x2 = (-b - sqrt(d)) / (2 * (double)a);
        printf("%d\n", k);
        printf("%f\n", x1);
        printf("%f\n", x2);
    }
    else if (a != 0 && d == 0) {
        k = 1;
        printf("%d\n", k);
        x1 = -b / (2 * (double)a);
        printf("%f\n", x1);
    }
    else if (a != 0 && d < 0) {
        k = 0;
        printf("%d\n", k);
    }

    return EXIT_SUCCESS;
}
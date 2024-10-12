#include <cstdio>
int main(int argc, char* argv[]) {
    int n = 0;
    scanf_s("%d", &n);
    int a[1000] = { 0 };
    int mx = 0;
    int mn = 0;
    for (int i = 0; i < n; ++i) {
        scanf_s("%d", &a[i]);
    }
    mx = a[0];
    mn = a[0];
    for (int i = 1; i < n; ++i) {
        if (mx < a[i]) {
            mx = a[i];
        }
    }
    for (int i = 1; i < n; ++i) {
        if (mn > a[i]) {
            mn = a[i];
        }
    }
    for (int i = 0; i < n; ++i) {
        if (a[i] == mx) {
            a[i] = mn;
        }
        printf("%d\n", a[i]);
    }
    return 0;
}
#include <cstdio>
#include <cmath>
int main(int argc, char* argv[]) {
    bool ind = 1;
    int l1 = 0;
    int w1 = 0;
    int h1 = 0;
    int l2 = 0;
    int w2 = 0;
    int h2 = 0;
    int lc = 0;
    int wc = 0;
    int hc = 0;
    int l = 0;
    scanf_s("%d", &l1);
    scanf_s("%d", &w1);
    scanf_s("%d", &h1);
    scanf_s("%d", &l2);
    scanf_s("%d", &w2);
    scanf_s("%d", &h2);
    scanf_s("%d", &lc);
    scanf_s("%d", &wc);
    scanf_s("%d", &hc);
    l = l1;
    if (l > w1) {
        l1 = l;
        w1 = w1;
    }
    else {
        l1 = w1;
        w1 = l;
    }
    l = l2;
    if (l > w2) {
        l2 = l;
        w2 = w2;
    }
    else {
        l2 = w2;
        w2 = l;
    }
    l = lc;
    if (l > wc) {
        lc = l;
        wc = wc;
    }
    else {
        lc = wc;
        wc = l;
    }
    if (l1 <= lc && w1 <= wc && l2 <= lc && w2 <= wc) {
        if (h1 > hc || h2 > hc) {
            printf("NO");
            ind = false;
        }
        if ( ind && l1 <= lc && w1 <= wc) {
            if (ind && l2 <= wc - w1 && w2 <= lc) {
                printf("YES");
                ind = false;
            }
            else if (ind && w2 <= wc - w1 && l2 <= lc) {
                printf("YES");
                ind = false;
            }
            else if (ind && l2 <= lc - l1 && w2 <= wc) {
                printf("YES");
                ind = false;
            }
            else if (ind && w2 <= lc - l1 && l2 <= wc) {
                printf("YES");
                ind = false;
            }
        }
        if (ind && w1 <= lc && l1 <= wc) {
            if (ind && l2 <= wc - l1 && w2 <= lc) {
                printf("YES");
                ind = false;
            }
            else if (ind && l2 <= lc && w2 <= wc - l1) {
                printf("YES");
                ind = false;
            }
            else if (ind && l2 <= lc - w1 && w2 <= wc) {
                printf("YES");
                ind = false;
            }
            else if (ind && w2 <= lc - w1 && l2 <= wc) {
                printf("YES");
                ind = false;
            }
        }
        if (ind && h1 + h2 <= hc && l1 <= lc && w1 <= wc && l2 <= lc && w2 <= wc) {
            printf("YES");
            ind = false;
        }
        else if (ind) {
            printf("NO");
        }
    }
    else {
        printf("NO");
    }
	return EXIT_SUCCESS;
}

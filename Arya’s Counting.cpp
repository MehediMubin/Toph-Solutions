#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int T, a, b, c, cs = 1;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d %d", &a, &b, &c);
        printf("Case %d: ", cs++);

        if (a == b && a == c && b == c) puts("Confused");

        if (a > b) {
            if (a > c) puts("A");
            else if (a == c) puts("Confused");
        }

        if (a > c) {
            if (a == b) puts("Confused");
        }

        if (b > a) {
            if (b > c) puts("B");
            else if (b == c) puts("Confused");
        }

        if (c > a) {
            if (c > b) puts("C");
        }
    }

    return 0;
}

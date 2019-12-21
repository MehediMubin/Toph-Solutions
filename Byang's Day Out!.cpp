#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int T, a, b, c;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d %d", &a, &b, &c);
        if (a + b >= c && a + c >= b && b + c >= a)
            puts("Yes");
        else
            puts("No");
    }

    return 0;
}

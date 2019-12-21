#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int T, n, cs = 1;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        printf("Case %d: ", cs++);
        double d, sum = 0;
        for (int i = 0; i < n; i++) {
            scanf("%lf", &d);
            sum += d;
        }
        printf("%0.3f\n", sum / n);
    }

    return 0;
}

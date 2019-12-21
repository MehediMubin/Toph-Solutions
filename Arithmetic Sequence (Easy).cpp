#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n, m, val, sum = 0;
    scanf("%d %d", &n, &m);
    sum = (n * (n + 1)) / 2;
    while (m--) {
        scanf("%d", &val);
        sum -= val;
    }
    printf("%d\n", sum);

    return 0;
}

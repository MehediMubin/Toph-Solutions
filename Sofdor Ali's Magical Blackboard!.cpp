#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main ()
{
    int T;
    ll a, b;
    scanf("%d", &T);
    while (T--) {
        scanf("%lld %lld", &a, &b);
        printf("%lld\n", a * b);
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n, a, val = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &a);
        if (a > val)
            val = a;
    }
    printf("%d\n", val);

    return 0;
}

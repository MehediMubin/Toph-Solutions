#include <bits/stdc++.h>

using namespace std;

int main ()
{
    char str[] = ".141592653589";
    int T, n;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        printf("%c\n", str[n]);
    }

    return 0;
}

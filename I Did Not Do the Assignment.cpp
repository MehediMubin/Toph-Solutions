#include <bits/stdc++.h>

using namespace std;

bool isPrime (int N)
{
    if (N < 2) return 0;
    if (N % 2 == 0) return 0;
    if (N == 2 || N == 3) return 1;
    for (int i = 3; i * i <= N; i++) {
        if (N % i == 0)
            return 0;
    }
    return 1;
}

int main ()
{
    int n;
    scanf("%d", &n);
    if (isPrime(n))
        puts("NO PUNISHMENT");
    else {
        for (int i = 0; i < n; i++)
            puts("I DID NOT DO THE ASSIGNMENT.");
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int a, b, c, counter = 0;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    c = sum;
    while (1) {
        c--;
        if (a + c > b && b + c > a)
            counter++;
        else break;
    }
    printf("%d\n", counter);

    return 0;
}

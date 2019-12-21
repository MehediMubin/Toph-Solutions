#include <bits/stdc++.h>

using namespace std;

#define MAX 1005

int main ()
{
    char str[MAX];
    int capital = 0, small = 0;
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            capital++;
        if (str[i] >= 'a' && str[i] <= 'z')
            small++;
    }
    printf("%d %d\n", capital, small);

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

#define MAX 1005

int main ()
{
    char str[MAX];
    int counter = 0;
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            counter++;
    }
    printf("%d\n", counter);

    return 0;
}

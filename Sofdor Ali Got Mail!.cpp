#include <bits/stdc++.h>

using namespace std;

int main ()
{
    char str[] = "IJ TPGEPS BMJ";
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == ' ') continue;
        str[i] = str[i] - 1;
    }
    printf("%s\n", str);

    return 0;
}

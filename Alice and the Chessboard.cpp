#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int arr[10][10];
    int T, a, b, c, d;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        memset(arr, 0, sizeof(arr));
        while (1) {
            for (int i = b, j = a; i >= 1 && j >= 1; i--, j--) {
                arr[i][j] = 1;
            }
            for (int i = b, j = a; i >= 1 && j <= 8; i--, j++) {
                arr[i][j] = 1;
            }
            for (int i = b, j = a; j >= 1 && i <= 8; i++, j--) {
                arr[i][j] = 1;
            }
            for (int i = b, j = a; j <= 8 && i <= 8; i++, j++) {
                arr[i][j] = 1;
            }
            break;
        }
        if (arr[d][c] == 1) puts("Yes");
        else if (arr[d][c] == 0) puts("No");
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int T, arr[105], cs = 1;
    scanf("%d", &T);
    while (T--) {
        int n, k, b, counter = 0;
        scanf("%d %d %d", &n, &k, &b);
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
        printf("Case %d: ", cs++);

        if (k == 1) {
            for (int i = 0; i < n; i++) {
                if (arr[i] == b)
                    counter++;
            }
        }

        else if (k == 2) {
            for (int i = 0; i < n - 1; i++) {
                int sum = 0;
                for (int j = i + 1; j < n; j++) {
                    sum = arr[i] + arr[j];
                    if (sum == b)
                        counter++;
                }
            }
        }

        else if (k == 3) {
            for (int i = 0; i < n - 2; i++) {
                int sum = 0;
                for (int j = i + 1; j < n - 1; j++) {
                    for (int l = j + 1; l < n; l++) {
                        sum = arr[i] + arr[j] + arr[l];
                        if (sum == b)
                            counter++;
                    }
                }
            }
        }
         printf("%d\n", counter);
    }

    return 0;
}

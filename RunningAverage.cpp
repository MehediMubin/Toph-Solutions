#include <iostream>
#include <cstdio>

using namespace std;

int main ()
{
        int n, a;
        cin >> n;
        double avg, sum = 0;
        for (int i = 1; i <= n; i++) {
                cin >> a;
                sum += a;
                avg = sum / i;
                printf("%.5lf\n", avg);
        }

        return 0;
}

#include <iostream>

using namespace std;

int main ()
{       
        int n, arr[50];
        cin >> n;
        arr[0] = 1;
        arr[1] = 1;
        for (int i = 2; i < n; i++) {
                arr[i] = arr[i - 1] + arr[i - 2];
        }       
        cout << arr[n - 1] << endl;
        
        return 0;
} 

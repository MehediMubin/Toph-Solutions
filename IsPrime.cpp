#include <iostream>

using namespace std;

int main ()
{
        int n, counter = 0;
        cin >> n;
        for (int i = 2; i <= n / 2; i++) {
                if (n % i == 0) {
                        cout << "No" << endl;
                        counter++;
                        break;
                }

        }       
        if (counter == 0)  
                cout << "Yes" << endl;
        
        return 0;
} 

#include <iostream>
#include <cstring>

using namespace std;

int main ()
{       
        char str[100], s[100];
        cin >> str >> s;
        int len = strlen(str);
        int len1 = strlen(s);
        if (len == len1) {
                int counter = 0;
                for (int i = 0; i < len; i++) {
                        for (int j = 0; j < len1; j++) {
                                if (str[i] == s[j]) {
                                        counter++;
                                }
                        }
                }
                if (len == counter)
                        cout << "Yes" << endl;
                else
                        cout << "No" << endl;
        }
        else
                cout << "No" << endl;

        return 0;
}

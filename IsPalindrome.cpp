#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
	char str[100], s[100], temp;
	cin >> str;
	int len = strlen(str);
	strcpy(s, str);
	for (int i = 0, j = len - 1; i < j ; i++, j--) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	if (0 == strcmp(str, s))
		cout << "Yes" << endl;
	else 
		cout << "No" << endl;

	return 0;
}

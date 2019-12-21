#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;
	int num, sum = 0;
	for (int i = 1; i <= 3; i++) {
		cin >> num;
		sum += num;
	}
	cout << (n - sum) << endl;

	return 0;
}

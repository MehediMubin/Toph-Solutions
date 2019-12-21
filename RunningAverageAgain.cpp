#include <iostream>

using namespace std;

int main ()
{
	int n, a;
	cin >> n;
	double avg, sum = 0.0;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		sum += a;
		avg = sum / i;
		cout << avg << endl;
	}

	return 0;
}

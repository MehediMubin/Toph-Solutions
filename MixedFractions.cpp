#include <iostream>

using namespace std;

int main ()
{
	int a, b;
	cin >> a >> b;
	int div, mod;
	div = a / b;
	mod = a % b;
	cout << div << " " << mod << " " << b << endl;

	return 0;
}

// Exponentiation by Squaring
// https://uchicago.kattis.com/problems/uchicago.mpcs.square

#include <iostream>
using namespace std;

int exp(int x, int n);

int main() {
	int x, n;
	cin >> x >> n;
	cout << exp(x, n) << endl;;
	return 0;
}

int exp(int x, int n) {
	if (n == 0)
		return 1;
	else if (n == 1)
		return x;
	else if (n % 2 == 0)	// n is even
		return exp(x*x, n/2);
	else
		return exp(x*x, (n-1)/2) * x;
}

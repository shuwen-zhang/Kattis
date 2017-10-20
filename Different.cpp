// https://uchicago.kattis.com/problems/different

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	long num1, num2;

	while (cin >> num1 >> num2) {
		cout << abs(num1 - num2) << endl;
	}

	return 0;
}

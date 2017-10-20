// https://uchicago.kattis.com/problems/uchicagoplacement.grotesque

#include <iostream>
using namespace std;

int main() {

	int m[10];		// array for holding 10 measurements
	int sum = 0;	// to add up the 10 measurements

	for (int i = 0; i < 10; i++) {

		cin >> m[i];

		// if any value is 6, simply assign value of 30 to sum (must clean)
		if (m[i] == 6) {
			sum = 30;
			break;
		}

		sum += m[i];
	}

	if (sum >= 30)
		cout << "CLEAN" << endl;
	else
		cout << "DO NOT CLEAN" << endl;

	return 0;
}

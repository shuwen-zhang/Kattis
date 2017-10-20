// https://uchicago.kattis.com/problems/cold

#include <iostream>
using namespace std;

int main() {
	int numTemps, numCold = 0;
	long temp;

	cout << "How many temperatures to were collected? ";
	cin >> numTemps;

	for (int i = 0; i < numTemps; i++) {
		cin >> temp;
		if (temp < 0)
			numCold++;
	}

	cout << numCold << endl;

	return 0;
}

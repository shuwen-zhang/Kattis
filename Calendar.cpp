// https://uchicago.kattis.com/problems/uchicago.calendar

#include <iostream>
using namespace std;

string format(int a, int b, int c);

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << format(a, b, c) << endl;
	return 0;
}

string format(int a, int b, int c) {
	if (a > 31)
		return "Format #3";

	else if (a > 12 && a <= 31) {
		if (c > 31)
			return "Format #2";
		else
			return "Ambiguous";
	}

	else {
		if (b > 12)
			return "Format #1";
		else
			return "Ambiguous";
	}
}

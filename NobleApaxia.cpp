// https://uchicago.kattis.com/problems/uchicago.noble

#include <iostream>
#include <string>
using namespace std;

string noble(string s);

int main() {
	string fname, lname;
	cin >> fname >> lname;
	cout << fname << " " << noble(lname) << endl;
	return 0;
}

string noble(string s) {
	int n = s.length();
	string noble;

	if (n != 5)
		for (int i = 0; i < n; i++)
			noble += s;

	else
		for (int i = 0; i < 4; i++)
			noble += s;

	return noble;
}

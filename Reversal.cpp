// https://uchicago.kattis.com/problems/uchicago.reversal

#include <iostream>
#include <string>
using namespace std;

string reverse(string s);

int main() {
	string s;
	getline(cin, s);
	cout << reverse(s) << endl;
	return 0;
}

string reverse(string s) {
	int n = s.length();

	if (n == 1)
		return s.substr(0, 1);
	else
		return reverse(s.substr(1)) + s.substr(0, 1);
}

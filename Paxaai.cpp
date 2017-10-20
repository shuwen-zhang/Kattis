// https://uchicago.kattis.com/problems/uchicago.mpcs.paxaai

#include <iostream>
#include <string>
using namespace std;

int main() {

	string name1;
	int n;
	char *name2 = NULL;

	cin >> name1;
	n = name1.length();
	name2 = new char[n]; 	// create C-string to hold converted name

	if ((n % 2) == 0) {
		for (int i = 0; i < n; i += 2) {
			name2[i] = name1[i+1];
			name2[i + 1] = name1[i];
		}
	} else {
		for (int i = 0; i < n - 1; i += 2) {
			name2[i] = name1[i+1];
			name2[i + 1] = name1[i];
		}
		name2[n-1] = name1[n-1];
	}

	name2[n] = '\0';

	cout << name2 << endl;

	delete [] name2;
	name2 = NULL;

	return 0;
}
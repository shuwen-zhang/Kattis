// https://uchicago.kattis.com/problems/uchicagoplacement.apaxiannames

#include <iostream>
#include <string>
using namespace std;

int main() {

	// Variables
	string community;
	string name;
	int num;													// num of Apaxian names to read in
	int p = 0 , h = 0, r = 0, c = 0;	// to hold number of each status
	int pos = 0, commLen;			// position of substring; len of community name

	// Read in community name
	cout << "Name of community? ";
	getline(cin, community);
	commLen = community.size();

	// Read in number of names
	cout << "How many names to read in? ";
	cin >> num;
	cin.ignore();

	for (int i = 0; i < num; i++) {
		getline(cin, name);
		pos = name.find(community, 0); 	// Find position of substring

		// At beginning: princess
		if (pos == 0)
			p++;
		// At end of name: baron
		else if (pos == name.size() - commLen)
			h++;
		// Not found: commoner
		else if (pos == string::npos)	// or pos == -1
			c++;
		// None of the above (in middle): priest
		else
			r++;
	}

	cout << p << " PRINCESS" << endl
		<< h << " BARON" << endl
		<< r << " PRIEST" << endl
		<< c << " COMMONER" << endl;

	return 0;
}

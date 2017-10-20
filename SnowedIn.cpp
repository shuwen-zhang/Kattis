// https://uchicago.kattis.com/problems/uchicago.mpcs.snowed

#include <iostream>
using namespace std;

int main() {
	int *depth = NULL;
	int n, min, max;

	cin >> n;
	depth = new int[n];

	cin >> depth[0];
	min = max = depth[0];

	for (int i = 1; i < n; i++) {
		cin >> depth[i];

		if (depth[i] < min)
			min = depth[i];
		if (depth[i] > max)
			max = depth[i];
	}

	cout << max - min << endl;

	delete [] depth;
	depth = NULL;

	return 0;
}

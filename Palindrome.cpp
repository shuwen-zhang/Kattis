// Determine Palindrome
// https://uchicago.kattis.com/problems/uchicagoplacement.palindrome

#include <iostream>
#include <string>
using namespace std;

int isPalindrome(string s);

int main () {
	cout << "Enter a string: ";
	string s;
	cin >> s;

	int palin = isPalindrome(s);

	if (palin == 0)
		cout << "PALINDROME" << endl;
	else
		cout << "NOT PALINDROME" << endl;

	return 0;
}

int isPalindrome(string s) {
	int palin = 0;
	int begin = 0, end = s.length() - 1;

	if (s.length() == 0 || s.length() == 1)
		return palin;

	else if (s[begin] == s[end])
		return palin + isPalindrome(s.substr(begin + 1, s.length() - 2));

	else
		return palin + 1;
}
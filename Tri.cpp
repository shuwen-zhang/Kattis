// https://open.kattis.com/problems/tri

#include <iostream>
  using namespace std;

int main() {

  int a, b, c;
  cout << "Enter three positive integers, separated by a space: \n";
  cin >> a >> b >> c;

  if (a + b == c)
   cout << a << "+" << b << "=" << c << endl;
  else if (a - b == c)
     cout << a << "-" << b << "=" << c << endl;
  else if (a * b == c)
    cout << a << "*" << b << "=" << c << endl;
  else if (b != 0 && (a / b) == c && a%b == 0)
    cout << a << "/" << b << "=" << c << endl;
  else if (a == b + c)
    cout << a << "=" << b << "+" << c << endl;
  else if (a == b - c)
    cout << a << "=" << b << "-" << c << endl;
  else if (a == b * c)
    cout << a << "=" << b << "*" << c << endl;
  else if (c!= 0 && (b / c) == a && b%c == 0)
    cout << a << "=" << b << "/" << c << endl;
  else
    cout << "No solution.\n";

  return 0;
}

#include <iostream>
using namespace std;

int main()
{
  int a, b, c, t;
  cin >> t;

  while (t--)
  {
    cin >> a;
    b = a % 10;
    c = a / 10;
    cout << c + b << endl;
  };
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
  int t;
  cin >> t;
  string s;
  while (t--)
  {
    cin >> s;
    cout << s.front() << s.size() - 2 << s.back();
  }
}
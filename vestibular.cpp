#include <bits/stdc++.h>
using namespace std;

#define ll long long;

int main()
{
  char n[80];
  char r[80];
  int t, c = 0;

  cin >> t;

  for (int i = 0; i < t; i++)
  {
    cin >> n[i];
  }
  for (int i = 0; i < t; i++)
  {
    cin >> r[i];
  }
  for (int i = 0; i < t; i++)
  {
    if (n[i] == r[i])
    {
      c++;
    }
  }

  cout << c << endl;
}

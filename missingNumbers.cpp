#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, count = 0, som = 0;
  cin >> n;
  int list[n - 1];

  for (int i = 2; i < n + 1; i++)
  {
    cin >> list[i];
    som += list[i];
    count += i;
  }
  cout << (count + 1) - som << endl;
}
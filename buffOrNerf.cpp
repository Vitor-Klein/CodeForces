#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
  ll n = 0, d = 0, m = 0, p = 0;
  cin >> n >> d >> m >> p;
  cout << ((n * d) < (m * p) ? "BUFF" : "NERF");
}
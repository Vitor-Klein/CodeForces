#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
  ll matriz[5][5];
  int posicaoV, posicaoH;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      cin >> matriz[i][j];
      if (matriz[i][j] == 1)
      {
        posicaoV = i + 1;
        posicaoH = j + 1;
      }
    }
  }

  cout << abs(posicaoV - 3) + abs(posicaoH - 3);

  return 0;
}

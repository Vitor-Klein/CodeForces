#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, tamanho, nP, nM, tamP = 0, tamM = 0;
  vector<int> camisas;

  cin >> n;

  while (n--)
  {
    cin >> tamanho;
    camisas.push_back(tamanho);
    if (tamanho == 1)
      tamP++;
    else
      tamM++;
  }

  cin >> nP >> nM;

  cout << ((tamP == nP && tamM == nM) ? "S" : "N");
  return 0;
}

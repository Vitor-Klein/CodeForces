#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  if (n > 0)
  {
    cout << "Positivo" << endl;
  }
  else if (n < 0)
  {
    cout << "Negativo" << endl;
  }
  else
  {
    cout << "Nulo" << endl;
  }
  return 0;
}
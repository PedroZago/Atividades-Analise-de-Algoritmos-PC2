#include <iostream>

using namespace std;

int main()
{
  int e;

  cout << "Quantidade de erros: ";
  cin >> e;

  e == 1 ? (cout << e << " erro detectado") : (cout << e << " erros detectados") << endl;

  return 0;
}

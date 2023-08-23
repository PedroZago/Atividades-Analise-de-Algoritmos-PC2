#include <iostream>

using namespace std;

int main()
{
  int code;

  cout << "Digite o código do produto para ver a sua classificação: ";
  cin >> code;

  switch (code)
  {
  case 1:
    cout << "Alimento não-perecível" << endl;
    break;
  case 2 ... 4:
    cout << "Alimento perecível" << endl;
    break;
  case 5 ... 6:
    cout << "Vestuário" << endl;
    break;
  case 7:
    cout << "Higiene Pessoal" << endl;
    break;
  case 8 ... 15:
    cout << "Limpeza e Utensílios Domésticos" << endl;
    break;
  default:
    cerr << "Código inválido" << endl;
  }

  return 0;
}

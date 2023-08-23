#include <iostream>
#include <exception>

using namespace std;

float divide(float x, float y)
{
  if (y == 0)
  {
    throw 1;
    // throw std::invalid_argument("Argumento 0 invalido");
  }
  else
  {
    return x / y;
  }
}

int main()
{
  const int tamanho = 10;
  int vetor[tamanho];

  int a, b;
  cout << "Digite os valores: ";
  cin >> a >> b;

  try
  {
    cout << divide(a, b);
  }
  catch (int erro)
  {
    if (erro == 1)
    {
      cout << "Erro de divisao por zero" << endl;
    }
  }
  catch (const invalid_argument &msg)
  {
    cerr << "Argumento invalido: " << msg.what() << endl;
  }

  return 0;
}

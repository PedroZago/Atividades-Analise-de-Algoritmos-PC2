#include <iostream>
#include <windows.h>

void pisca(int milissegundos)
{
  int contador = 0;
  while (true)
  {
    for (int i = 0; i < 10; ++i)
    {
      if (i % 2 == contador % 2)
      {
        std::cout << "1 ";
      }
      else
      {
        std::cout << "0 ";
      }
    }
    std::cout << std::endl;

    contador++;
    Sleep(milissegundos);
  }
}

void piscaUmIndoEVoltando(int milissegundos)
{
  for (int i = 0; i < 10; ++i)
  {
    for (int j = 0; j <= i; ++j)
    {
      std::cout << "0 ";
      Sleep(milissegundos);
    }
    std::cout << std::endl;
  }

  for (int i = 8; i >= 0; --i)
  {
    for (int j = 0; j <= i; ++j)
    {
      std::cout << "0 ";
      Sleep(milissegundos);
    }
    std::cout << std::endl;
  }
}

int main()
{
  int milissegundos = 2000;
  std::cout << "Pisca-pisca com todos os bits:" << std::endl;
  pisca(milissegundos);

  std::cout << "\nPisca um indo e voltando:" << std::endl;
  piscaUmIndoEVoltando(milissegundos);

  return 0;
}
